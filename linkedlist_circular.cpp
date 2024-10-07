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
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insertAttail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        insertAthead(head, val);
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void deleteAthead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todel=head;
    temp->next=head->next;
    head=head->next;
    delete todel;
}
void deletion(node* &head, int pos){
    node* temp=head;
    if(pos==1){
        deleteAthead(head);
        return;
    }
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todel=temp->next;
    temp->next=temp->next->next;
    delete todel;
}
void print(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<endl;
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
    deletion(head1, 1);
    print(head1);
}
