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
node* merge(node* &head1, node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummy=new node(-1);
    node* p3=dummy;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummy->next;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    int arr[]={1, 4, 5, 7};
    int arr2[]={2, 3, 6};
    for(int i=0; i<4; i++){
        insertAthead(head1, arr[i]);
    }
    for(int i=0; i<3; i++){
        insertAthead(head2, arr2[i]);
    }
    print(head1);
    print(head2);
    node* newhead=merge(head1, head2);
    print(newhead);
}
