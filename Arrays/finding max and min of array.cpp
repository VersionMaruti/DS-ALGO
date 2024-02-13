#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mn=100000000;//pahele no. se compare krne ke liye krte j
    int mx=-19999999;
    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);//for minimum of the array
        mx=max(mx,arr[i]);//for maximum of the array
    }
    cout<<mx<<endl;
    cout<<mn<<endl;
    
    return 0;
}