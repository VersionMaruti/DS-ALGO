#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];//???commutative hota hain xor lekinek baari mein to ek hi input lega
    }
    return xorsum;
}

int main(){
    int arr[7]={6,8,6,4,8,9,9};
    cout<<unique(arr,7)<<" "<<endl;
    return 0;
}