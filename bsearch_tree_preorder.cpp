#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* constructBST(int preorder[], int* preoderIDX, int key, int min, int max, int n){
    if(*preoderIDX>=n){
        return NULL;
    }
    Node* root=NULL;
    if(key>min && key<max){
        root=new Node(key);
        *preoderIDX+=1;
        if(*preoderIDX<n){
            root->left=constructBST(preorder, preoderIDX, preorder[*preoderIDX], min, key, n);
        }
        if(*preoderIDX<n){
            root->right=constructBST(preorder, preoderIDX, preorder[*preoderIDX], key, max, n);
        }
    }
    return root;
}
void Printpreorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Printpreorder(root->left);
    Printpreorder(root->right);
}
int main(){
    int preorder[]={10, 2, 1, 13, 11};
    int n=5;
    int preoderIDX=0;
    Node* root=constructBST(preorder, &preoderIDX, preorder[0], INT_MIN, INT_MAX, n);
    Printpreorder(root);
}
