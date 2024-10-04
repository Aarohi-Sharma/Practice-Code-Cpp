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
void intersect(node* &head1, node* &head2, int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }  
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }  
    temp2->next=temp1;
}
int intersection(node* &head1, node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    insterAttail(head1, 1);
    insterAttail(head1, 2);
    insterAttail(head1, 3);
    insterAttail(head1, 4);
    insterAttail(head1, 5);
    insterAttail(head2, 6);
    insterAttail(head2, 7);
    insertAthead(head2, 8);
    insterAttail(head2, 4);
    insterAttail(head2, 5);
    print(head1);
    print(head2);
    intersect(head1, head2, 4);
    cout<<intersection(head1, head2);
}
