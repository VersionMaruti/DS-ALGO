#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define n 100
class stack{
    int* arr;
    int top;

    public:

    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        top--;
    }
    void Top(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
        
    }
    bool isempty(){
        return top==-1;
    }
void display(){
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    st.pop();
    st.Top();
    st.isempty();
    st.display();
    return 0;
}