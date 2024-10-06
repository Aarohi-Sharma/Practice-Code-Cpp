#include<iostream>
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
void makeCycle(node* &head, int pos){
    node* temp=head;
    node* start;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            start=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=start;
}
bool detect(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void removeCycle(node* &head){
    node* fast=head;
    node* slow=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast-fast->next;
    }
    slow->next=NULL;
}
int main(){
    node* head=NULL;
    insterAttail(head, 1);
    insterAttail(head, 2);
    insterAttail(head, 3);
    insertAthead(head, 4);
    print(head);
    makeCycle(head, 3);
    cout<<detect(head);
    removeCycle(head);
    cout<<detect(head);
    print(head);
}
