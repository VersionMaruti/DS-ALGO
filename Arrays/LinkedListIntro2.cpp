#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* next;

    // node(int val){
    //     data=val;  no need here:)
    //     next=NULL;
    // }
};
void Traversal(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
// void deletionbyvalue(node* &head,int val){
//     node* temp=head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     node* todel = temp->next;
//     temp->next=temp->next->next;//concept ko chain ki tarah socho yahan ki humein do kaaam krne hain
//     //ek head ko VALUE takk le jaana hain aur uske agle waale node ko temp ko point karwana hain
//     //isliye kyunki yahan index mein nhi khele value mein khele hain jiske wajah se temp->next->
//     //data ka use kara bajaaye direct temp ke and 29 line mein bhi agle waale node ko point kr sake
//     //uske liye do baar next lagaye hain.
//     delete todel;
// }
void deletionbyindex(node* &head,int index){//deletion by index
    node* temp=head;
    int i=0;
    while(i!=index-1){
        temp=temp->next;
        i++;
    }
    node* todel = temp->next;
    temp->next=temp->next->next;
    delete todel;
}
// node* reverseLL(node* &head){
//     node* previous=NULL;
//     node* current=head;..........Iterative Method in which we use # pointers 
//     node* next;

//     while(current!=NULL){
//         next=current->next;
//         current->next=previous;

//         previous=current;
//         current=next;
//     }
//     return previous;
// }

node* reverseRecursive(node* head){

    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

node* reversek(node* &head,int k){
    node* previous=NULL;
    node* current=head;
    node* next;

    int count=0;
    while(current!=NULL && count<k){
        next=current->next;
        current->next=previous;

        previous=current;
        current=next;
        count++;
    }

    if(next!=NULL){
        head->next=reversek(next,k);//bhool jaao to yt pr chale jaana ye smjhne ke liye AC pr.
    }
    return previous;
}
int main(){
    /*
    Linked List ko main function se print karwa rahe hain to node() constructor ki jarurat nhi
    padegi kyunki main fxn mein dynamically allocation mein node() aayega usko compiler as 
    constructor na read kar le isliye nhi aayega.
    Function ke through karna ho jo humne peechli file mein kar rakha hain usme constructor
    aayega node() and insertion ya any other function mein hi hum dynamic allocation kar denge
    node constructor ka use kar ke.
    */
    node* head;
    node* second;
    node* third;
    node* fourth;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();

    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 10;
    third->next = fourth;

    fourth->data = 13;
    fourth->next = NULL;

    Traversal(head);
    // deletion(head,9);
    // deletionbyindex(head,1);
    // head=reverseRecursive(head);
    head=reversek(head,3);
    Traversal(head);
    return 0;
}