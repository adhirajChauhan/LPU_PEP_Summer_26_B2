#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int sumOfNodes(Node* root){
    if(root==NULL) return 0;

    int ls = sumOfNodes(root->left);
    int rs = sumOfNodes(root->right);

    return root->data + ls + rs;

}



https://leetcode.com/problems/sum-of-left-leaves/


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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;

        int sum = 0;
        if(root->left && root->left ->left ==NULL && root->left->right == NULL){
            sum += root->left->data;
        }

        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;

    }
};
int main()
{
 
}