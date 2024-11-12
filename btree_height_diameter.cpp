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
int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight=calcHeight(root->left);
    int rHeight=calcHeight(root->right);
    return max(lHeight, rHeight)+1;
}
int calcDiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight=calcHeight(root->left);
    int rHeight=calcHeight(root->right);
    int currD=lHeight+rHeight+1;
    int lD=calcDiameter(root->left);
    int rD=calcDiameter(root->right);
    return max(currD, max(lD, rD));
}
int diameter(Node* root, int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0, rh=0;
    int ldia=diameter(root->left, &lh);
    int rdia=diameter(root->right, &rh);
    int currdia=lh+rh+1;
    *height=max(lh, rh)+1;
    return max(currdia, max(ldia, rdia));
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<calcHeight(root)<<endl;
    cout<<calcDiameter(root)<<endl;
    int height=0;
    cout<<diameter(root, &height)<<endl;
}
