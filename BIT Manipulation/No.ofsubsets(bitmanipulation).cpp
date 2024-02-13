#include<iostream>
using namespace std;
void subset(int n,int arr[]){
    for(int i=0;i<(1<<n);i++){//ye kisi bhi array ke number of subsets ko batata hain jaise
    //agar 3 size hain to 0 se 7 takk number rahenge aur per number pe 1 ke acc. arr[j] ko
    //print karta rahega.
        for(int j=0;j<n;j++){
            if((i & (1<<j))){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subset(n,arr);

    return 0;
}