#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int swap=arr[i];//swap mein thodi dikkat h feel nhi aayi.
            if(arr[j]<arr[i]){//swaping sort bhi bol sakte ise,isme minimum element ko jisse comparison 
            //kr rhe usse swap kr dete hain.
                arr[i]=arr[j];
                arr[j]=swap;
            }
            for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
        }
        }
    }
    
    return 0;
}