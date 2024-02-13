#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

class queue{
    public:
    stack <int> s1;
    stack <int> s2;

    void push(int val){
        s1.push(val);
    }

    void pop(){
        if(s1.empty() && s2.empty() ){
            cout<<"Queue is empty "<<endl;
            return;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }

    int peek(){
        if(s1.empty() && s2.empty() ){
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        int topval = s2.top();
        return topval;
    }

    bool isempty(){
        if(s1.empty() && s2.empty() ){
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

/*Approach 2:-
#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

class queue{
    public:
    stack <int> s1;
    stack <int> s2;

    void push(int val){
        s1.push(val);
    }

    void pop(){
        if(s1.empty() && s2.empty() ){
            cout<<"Queue is empty "<<endl;
            return;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }

    int peek(){
        if(s1.empty() && s2.empty() ){
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        int topval = s2.top();
        return topval;
    }

    bool isempty(){
        if(s1.empty() && s2.empty() ){
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
}*/