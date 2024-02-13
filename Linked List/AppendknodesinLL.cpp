#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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
void insert(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
       n->next=head;
       head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}

int length(node* &head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }

    return l;
}
node* kappend(node* &head,int k){

    node* newtail;
    node* newhead;
    node* tail=head;

    int l=length(head);
    // k=k%l;?
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
    tail->next=head;
    newtail->next=NULL;
    return newhead;

}

void traversal(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main(){
    node* head=NULL;
    insert(head,4);
    insert(head,5);
    insert(head,8);
    insert(head,7);
    insert(head,9);
    insert(head,2);
    insert(head,3);

    traversal(head);
    node* newhead=kappend(head,3);
    traversal(newhead);

    
    return 0;
}