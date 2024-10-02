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
void insterAttail(node* &head, int val){
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
void print(node* head){
    node* teamp=head;
    while(teamp!=NULL){
        cout<<teamp->data<<"->";
        teamp=teamp->next;
    }
    cout<<"NULL"<<endl;
}
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head, int k){
    node* newhead;
    node* newtail;
    node* tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
int main(){
    node* head=NULL;
    insterAttail(head, 1);
    insterAttail(head, 2);
    insterAttail(head, 3);
    insertAthead(head, 4);
    insterAttail(head, 5);
    insterAttail(head, 6);
    print(head);
    node* newhead=kappend(head, 3);
    print(newhead);
}
