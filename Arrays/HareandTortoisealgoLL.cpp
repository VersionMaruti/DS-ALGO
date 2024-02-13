#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void makecycle(node* &head,int pos){
    node* start;
    node* temp=head;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            start=temp->next;
        }
        temp=temp->next;
        count++;
    }
    temp->next = start;

}
bool detectcycle(node* &head){
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

void removecycle(node* &head){
    node* slow=head;
    node* fast=head;

    do{
        fast=fast->next->next;
        slow=slow->next;//pahele dono same hain isliye do-while loop lagaya.
    }while(fast!=slow);
    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}
void Traversal(node* head){
    node* temp=head;
    while(temp!=NULL ){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
int main(){
    node* head;
    node* second;  
    node* third;  
    node* fourth;  
    node* five;

    head = new node();  
    second = new node();  
    third = new node();  
    fourth = new node();  
    five = new node();

    head->data=3;
    head->next=second;

    second->data=7;
    second->next=third;

    third->data=9;
    third->next=fourth;

    fourth->data=4;
    fourth->next=five;

    five->data=8;
    five->next=NULL; 

    makecycle(head,2);
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    Traversal(head); 
    return 0;
}

/*
Hare and Tortoise Algorithm:- Cyclic Linked list ko detect aur remove karne ke liye is algorithm ka 
use karte hain.Isme fast pointer 2 steps jump karta hain aur slow ek step.Ab agar cycle hogi to
ek point par aakar fast poiner aur slow pointer ek hi position par aa jayenege jisse cycle detection
ho jayega.
Cycle remove karne ke liye fast aur slow jo same point par honge unme se kisi ek ko head par pahuncha
denge aur dono ko ek step badhayenge jab ye dono ek hi point par point karein matlab wahin se cycle
start horhi then slow ko NULL se point karwa kar cycle hata sakte hain.

        Distance travelled by fast = 2*Distance travelled by slow.
                          m+n+l*j  = 2*(m+n+l*i)
                          m+n      = l*(i-2*j)[some integer*l means pura loop ka circle jo m+n ke
                          equal hain to l-n = m hoga isliye dono chalte chalte same par aa jayenge.]
*/