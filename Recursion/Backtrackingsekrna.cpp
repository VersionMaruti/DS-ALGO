#include<iostream>
using namespace std;
//Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
//The solution set must not contain duplicate subsets. Return the solution in any order.

 
void Bubblesort(int arr[],int n){
    int issorted=0;
    for(int i=0;i<n-i;i++){
        issorted=1;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
                issorted=0;
            }
        }
    }
    if(issorted){
        return;
    }
}
int subset(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
           else if(i & (1<<j)){
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

    subset(arr,n);
    
    return 0;
}