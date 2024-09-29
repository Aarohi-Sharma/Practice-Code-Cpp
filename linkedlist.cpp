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
bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteAthead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAthead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main(){
    node* head=NULL;
    insterAttail(head, 1);
    insterAttail(head, 2);
    insterAttail(head, 3);
    insertAthead(head, 4);
    cout<<search(head, 6)<<endl;
    print(head);
    deletion(head, 3);
    deleteAthead(head);
    print(head);
}
