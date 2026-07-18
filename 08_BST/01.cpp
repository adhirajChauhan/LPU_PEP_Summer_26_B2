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