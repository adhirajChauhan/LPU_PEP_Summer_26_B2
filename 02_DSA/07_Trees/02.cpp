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

void preorder(Node* root){
    //base case
    if(root==NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}
 
int countNodes(Node* root){
    if(root==NULL) return 0;

    // return countNodes(root->left) + countNodes(root->right) + 1;

    int lc = countNodes(root->left);
    int rc = countNodes(root->right);
    return lc + rc + 1;

}

int countLeaf(Node* root){
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL) return 1;
    int ll = countLeaf(root->left);
    int rl = countLeaf(root->right);
    return ll + rl;


}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);


}