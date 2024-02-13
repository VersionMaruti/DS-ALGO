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

class queue{
    public:

    node* front;
    node* back;

    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int val){
        node* n = new node(val);

        if(front==NULL){
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue overflow"<<endl;
            return;
        }
        node* todelete;
        todelete=front;
        front=front->next;
        delete todelete;
    }

    int peek(){
         if(front==NULL){
            cout<<"Queue overflow"<<endl;
            return -1;
        }

        return front->data;
    }

    bool isempty(){
         if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.isempty()<<endl;
    return 0;
}