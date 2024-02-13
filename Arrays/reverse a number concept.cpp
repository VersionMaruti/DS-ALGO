#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int reverse=0;
    for(n!=0;int i=n%10;reverse=reverse*10+i){
        cout<<reverse<<endl;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}