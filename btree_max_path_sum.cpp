#include<iostream>
#include<vector>
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
int maxpathsumutil(Node* root, int &ans){
    if(root==NULL){
        return 0;
    }
    int left=maxpathsumutil(root->left, ans);
    int right=maxpathsumutil(root->right, ans);
    int nodemax=max(max(root->data, root->data+left+right), max(root->data+left, root->data+right));
    ans=max(ans, nodemax);
    int singlepathsum=max(root->data, max(root->data+left, root->data+right));
    return singlepathsum;
}
int maxpathsum(Node* root){
    int ans=-100;
    maxpathsumutil(root, ans);
    return ans;
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<maxpathsum(root);
}
