https://leetcode.com/problems/binary-tree-level-order-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int levelSize = q.size();
            vector<int> levelElements;

            for(int i = 0; i < levelSize; i++){
                TreeNode* frontNode = q.front();
                q.pop();

                levelElements.push_back(frontNode->val);

                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            result.push_back(levelElements);
        }
        return result;
    }

};




class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root==NULL) return -1;

        queue<TreeNode*> q;
        q.push(root);
        vector<long long> levelSum;

        while(!q.empty()){
            long long sum = 0;
            int levelSize = q.size();
            for(int i = 0; i < levelSize; i++){
                TreeNode* frontNode = q.front();
                q.pop();

                sum += frontNode->val;

                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            levelSum.push_back(sum);
        }
        sort(levelSum.begin(), levelSum.end());
        if(levelSum.size() < k) return -1;
        return levelSum[k-1];


    }
};


https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;

        while(!q.empty()){
            int levelSize = q.size();
            vector<int> levelElements;

            for(int i = 0; i< levelSize; i++){
                TreeNode* frontNode = q.front();
                q.pop();
                levelElements.push_back(frontNode->val);

                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            if(!leftToRight){
                reverse(levelElements.begin(), levelElements.end());
            }
            result.push_back(levelElements);
            leftToRight = !leftToRight;
        }
        return result;


    }
};










