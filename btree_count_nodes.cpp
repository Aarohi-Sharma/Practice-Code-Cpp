#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return (countNodes(root->left)+countNodes(root->right)+1);
}
int sumNode(Node* root){
    if(root==NULL){
        return 0;
    }
    return (sumNode(root->left)+sumNode(root->right)+(root->data));
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<countNodes(root)<<endl;
    cout<<sumNode(root)<<endl;
}
