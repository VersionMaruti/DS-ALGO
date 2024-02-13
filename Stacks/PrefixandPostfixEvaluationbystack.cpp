#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;

#define n 100

class stack{
    public:
    int top;
    int* arr;

    stack(){
        top = -1;
        arr= new int[n];
    }

    int isempty(){
        return top == -1;
    }

    int isfull(){
        if(top==n-1){
            return 1;
        }
        return 0;
    }

    int Top(){
        if(isempty()){
           
            return 0;
        }
        return arr[top];
    }

    void push(int exp){
        if(isfull()){
           
            return;
        }
        top++;
        arr[top]=exp;
    }

    void pop(){
        if(isempty()){
           
            return;
        }
        top--;
    }

    void InfixEvaluation(const char *exp){
        for(int i=n;i>=0;i--){
            if(exp[i]>='0' && exp[i]<='9'){
                push(exp[i]-'0');
            }
            else{
                int op2=Top();
                pop();
                int op1=Top();
                pop();

                switch(exp[i]){
                    case '+':
                    push(op1+op2);
                    break;
                    case '-':
                    push(op1-op2);
                    break;
                    case '*':
                    push(op1*op2);
                    break;
                    case '/':
                    push(op1/op2);
                    break;
                    case '^':
                    push(pow(op1,op2));
                    break;
                }
            }
        }

        cout<<abs(arr[top])<<endl; //answer negative mein aa rha tha to jugaad lagaya hain.
    }
    void PostfixEvaluation(const char *exp1){
        for(int i=0;exp1[i]!='\0';i++){
            if(exp1[i]>='0' && exp1[i]<='9'){
                push(exp1[i]-'0');
            }
            else{
                int op2=Top();
                pop();
                int op1=Top();
                pop();

                switch(exp1[i]){
                    case '+':
                    push(op1+op2);
                    break;
                    case '-':
                    push(op1-op2);
                    break;
                    case '*':
                    push(op1*op2);
                    break;
                    case '/':
                    push(op1/op2);
                    break;
                    case '^':
                    push(pow(op1,op2));
                    break;
                }
            }
        }

        cout<<arr[top]<<endl;
    }
    
};

int main(){

    stack st;
    stack st1;

    const char *exp = "-+7*45+20";
    const char *exp1 = "46+2/5*7+";

    st.InfixEvaluation(exp);
    st1.PostfixEvaluation(exp1);
    
    return 0;
}


/*
For prefix evalution we start from the last and for postfix evaluation we start from the start
rest logic same but be careful in operanf decide.
*/