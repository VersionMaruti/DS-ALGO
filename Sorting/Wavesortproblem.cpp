#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void wavesort(int arr[],int n){
    int i=1;
    while(i<n){
        if(arr[i]>arr[i-1]){
            int swap=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=swap;
        }
        else if(arr[i]>arr[i+1] && i<=n-2){
            int swap1=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=swap1;
        }
        i+=2;
    }
}
int main(){
    int arr[]={1,3,4,7,5,6,2};
    wavesort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}