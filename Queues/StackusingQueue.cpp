#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

class stackqueue{
    public:
    queue<int> q1;
    queue<int> q2;

    void push(int val){
        q2.push(val);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }

    int pop(){
        if(q1.empty()){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        int t = q1.front();
        q1.pop();
        return t;
    }

    bool isempty(){
        if(q1.empty()){
            return true;
        }
        return false;
    }
};
int main(){
    stackqueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    cout<<q.isempty()<<endl;
    return 0;
}

/*Approach-2:-by single queue:-
class stackqueue{
    public:
    queue<int> q1;

    void push(int val){
        q1.push(val);
        for(int i=0;i<q1.size()-1;i++){
            q1.push(q1.front());
            q1.pop();
        }
    }

    int pop(){
        if(q1.empty()){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        int t = q1.front();
        q1.pop();
        return t;
    }

    bool isempty(){
        if(q1.empty()){
            return true;
        }
        return false;
    }
};
int main(){
    stackqueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    cout<<q.isempty()<<endl;
    return 0;
}*/