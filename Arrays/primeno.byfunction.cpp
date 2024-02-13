#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){
    int n;
    cin>>n;

    if(isprime(n)){
        cout<<"primeno."<<endl;
    }
    else{
        cout<<"notprimeno."<<endl;
    }
    
    return 0;
}