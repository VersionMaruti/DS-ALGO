#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<"notprime"<<endl;
            break;
        }
        else{
            cout<<"primeno."<<endl;
        }
    }
    return 0;
}