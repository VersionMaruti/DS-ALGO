#include<iostream>
using namespace std;
int HCF(int a,int b){
    while(b!=0){
        int count=a%b;
        a=b;
        b=count;
    }
    cout<<a<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;
    HCF(a,b);
    return 0;
}