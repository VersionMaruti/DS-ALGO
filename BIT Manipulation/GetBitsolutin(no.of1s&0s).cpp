#include<iostream>
using namespace std;
int zeroes(int a,int b){
    int count=0;
    int n=(a^b);
    while(n){
        if((n & 1)==1){//getbit solution.;)Time complexity log(n) hogi.
            count++;
        }
        n=(n>>1);
    }
    return count;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<zeroes(a,b)<<endl;
    
    return 0;
}
//no. of bits in any  number = log(n)+1.