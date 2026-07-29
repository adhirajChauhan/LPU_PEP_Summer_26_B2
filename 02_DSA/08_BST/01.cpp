/*
A Binary Search tree(BST) is a special type of tree where
    #Every node has at most two children
    #For Every node -
        All values in the LST are smaller
        All values in RST are greater
    #Both LST and RST are also BST

    #inorder traversal of a BST is always sorted
*/


https://leetcode.com/problems/search-in-a-binary-search-tree/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        if(root->val == val) return root;
        if(val < root->val) return searchBST(root->left, val);
        return searchBST(root->right, val);

    }
};


https://leetcode.com/problems/range-sum-of-bst/

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL) return 0;

        if(root->val >= low && root->val <= high){
            return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        }
        else if(root->val < low){
            return rangeSumBST(root->right, low, high);
        }
        else{
            return rangeSumBST(root->left, low, high);
        }
    }
};



https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
//hw



https://leetcode.com/problems/insert-into-a-binary-search-tree/

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);

        if(val < root->val){
            root->left = insertIntoBST(root->left, val);
        }
        else{
            root->right = insertIntoBST(root->right, val);
        }
        return root;
    }
};


https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

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
    void inorder(TreeNode* root, vector<int> & ans){
        if(root==NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);

        int left = 0;
        int right = ans.size() - 1;
        while(left < right){
            int sum = ans[left] + ans[right];
            if(summ == k) return true;
            else if(sum < k) left++;
            else right--;
        }
        return false;
    }
};


https://leetcode.com/problems/kth-smallest-element-in-a-bst/

//hw


https://leetcode.com/problems/validate-binary-search-tree/description/

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
    bool validate(TreeNode* node, long long min, long long max){
        if(node == NULL) return true;

        if(node->val <= min || node->val >= max) return false;
        return validate(node->left, min, node->val) && validate(node->right, node->val, max);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
};





