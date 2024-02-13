#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int rowsum=0;
    int colsum=0;
    int Max=0;
    int sum;
    for(int i=0;i<n;i++){
        rowsum=rowsum+arr[i];
        colsum=0;
        for(int j=i+1;j<n;j++){
            colsum=colsum+arr[j];
        }
        sum=colsum-rowsum;
        if(sum>Max){
            Max=sum;
        }
    }
    int fsum=0;
    for(int i=0;i<n;i++){
        fsum=fsum+arr[i];
    }
    if(fsum>Max){
        cout<<fsum<<endl;
    }
    else{
        cout<<Max<<endl;
    }
    //Kadence Algorithm
    int currsum=0;
    int MAX=0;
    int start=-1;
    int ansstart=-1;
    int ansend=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        currsum=currsum+arr[i];
        if(currsum<0){
            currsum=0;
        }
        if(currsum>MAX){
            MAX=currsum;
            ansstart=start;
            ansend=i;
        }
    }
    cout<<MAX<<endl;
    return 0;
}