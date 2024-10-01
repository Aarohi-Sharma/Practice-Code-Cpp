#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAttail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void evenafterodd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenS=even;
    while(odd->next && even->next){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenS;
    if(even){
        even->next=NULL;
    }
}
void print(node* head){
    node* teamp=head;
    while(teamp!=NULL){
        cout<<teamp->data<<"->";
        teamp=teamp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head1=NULL;
    int arr[]={1, 4, 5, 7};
    for(int i=0; i<4; i++){
        insertAttail(head1, arr[i]);
    }
    print(head1);
    insertAthead(head1, 2);
    print(head1);
    evenafterodd(head1);
    print(head1);
}
