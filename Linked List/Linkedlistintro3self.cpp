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
        head=n;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertathead(node* &head,int val){
    node* n= new node(val);
//     cout<<n<<endl;/*Give address as output*/
//     cout<<n->data<<endl;/*Give 4 as output*/
//     cout<<n->next<<endl;/*Give NULL as output*/
//     cout<<head<<endl;/*Give NULL as output*/
    node* temp = head;
    head=n;
    n->next=temp;
    
}

void insertatmid(node* &head,int val,int index){
    node* n = new node(val);
    node* temp = head;
    int i=0;
    while(i!=index){
        temp=temp->next;
        i++;
    }
    // temp=n;
    // temp->data = val;for replacing
    n->next = temp->next;
    temp->next=n;
}
void deletion(node* &head,int index){
    if(head==NULL){
        return;
    }
    if(index==0){
        node* todelete = head;
        head=head->next;
        delete todelete;
        return;
    }
    node* temp = head;
    int i=0;
    while(i!=index-1){
        temp=temp->next;
        i++;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

node* reversek(node* &head,int k){
    // node* prev=NULL;
    // node* curr=head;
    // node* Next;
    // while(curr->data!=val){
    //     Next=curr->next;//Isko recursive method se bhi solve karna hoga...:(
    //     curr->next = prev;

    //     prev=curr;
    //     curr=Next;
    // }
    // head->next=curr;
    // head=prev;
    node* prev=NULL;
    node* curr=head;
    node* Next;

    int count=0;
    while(curr!=NULL && count<k){
        Next=curr->next;
        curr->next = prev;

        prev=curr;
        curr=Next;
        count++;
    }
    if(Next!=NULL){
        head->next=reversek(Next,k);
    }
    return prev;

}
void traversal(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    insert(head,4);
    // cout<<"New Head "<<head<<endl;
    insert(head,5);
    insertathead(head,3);
    insertatmid(head,7,1);
    traversal(head);
    // deletion(head,0);
    reversek(head,2);
    
    traversal(head);

    return 0;
}