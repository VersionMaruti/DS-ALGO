#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int issorted=0;
    // BUBBLE SHORT
    for(int i=0;i<n-1;i++){//this for paases/intentions for every integer in array every ineger ko
                           //end position takk laane tak n-1 paases ho jaate hain  
        issorted=1;   
        for(int j=0;j<n-i-1;j++){//this is for every comparison for every integer usko uski sahi 
                                 //position tak laane mein.
            if(arr[j]>arr[j+1]){
                int swap=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swap;
                issorted=0;
            }
        }
        if(issorted){
            return;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}