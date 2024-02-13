#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

void insertatbottom(stack<int> &st,int element){

    if(st.empty()){
        st.push(element);
        return;
    }
    int removeele=st.top();
    st.pop();
    insertatbottom(st,element);
    st.push(removeele);
}

void reversestack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int Topele=st.top();
    st.pop();
    reversestack(st);
    insertatbottom(st,Topele);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reversestack(st);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}