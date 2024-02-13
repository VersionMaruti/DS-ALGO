#include<iostream>
#include<bits/stdc++.h>//new header file 
using namespace std;

int hexadecimaltodecimal(string n){
    int x=0;
    int y=1;

    int s=n.size();//string aage padhenge abhi smjh nhi aaya itna .
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            x=x+(y*n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            x=x+(n[i]-'A'+10);
        }
        y=y*16;
    }
    return x;
}

int main(){
    string n;//string isliye liye hain kyunki base jitna ho utne takk hi digit liye hain to agar 16 hain to 
             //15 takk hi digit aayenge aur 9 se upar ke digit print krne ke liye string ka use krte.
    cin>>n;

    cout<<hexadecimaltodecimal(n)<<endl;
    return 0;
}