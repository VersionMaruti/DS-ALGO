#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a=5;
    int b=7;
    a=a^b;
    b=a^b;
    a=a^b;//BIT manipulation se swaping ko asaan kiya jaa sakta hain.do number ko teen 
    //baar XOR le kar numbers ko swap kiya jaa sakta hain. 
    cout<<a<<endl;
    cout<<b<<endl;
    if(n & 1<<0!=0){
        cout<<"no. is odd"<<endl;//koi bhi number agar odd hota hain to uske binary
        //no. ke last pe 1 hota hain.to getbit ke concept ka use kr hum ye pata 
        // laga sakte ki  koi number oddd han ki nhi.
    }
    else{
        cout<<"no. is even"<<endl;
    }
    return 0;
}
//ADDING and SUBSTRACTION  in binary:-
//1.add ke liye bss itna dimaag mein rakhna hain ki jahan 2 ya uuse jyada no. 
//aaye usko binary mein convert kr ke carry lagado
//2. substraction kuch nhi hota binary mein uske liye 2's compliment nikaal 
//kar usko number se add kr dete hain.
//For 2's compliment:-
//swap the number.swap kroge  to aage ke 0s 1 mein change ho jayenge aur 32
//bits hoti hain to carry jo hogi wash out ho jayegi.
//add one.