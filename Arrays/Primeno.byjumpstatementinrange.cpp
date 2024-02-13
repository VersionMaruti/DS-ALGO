#include<iostream>
using namespace std;

int isprime(int n){
    for(int i=1;i<=n;i++){
        int j;
        for(j=2;j<i;j++){//BC yahan pe int j lagate hain to error aata :)
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            return i;
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    cout<<isprime(n)<<endl;
    
    return 0;
}
