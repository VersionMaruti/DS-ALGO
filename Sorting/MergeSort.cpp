#include<iostream>
using namespace std;
void merge(int a[],int lo,int mid,int hi){
    int i=lo;
    int j=mid+1;
    int k=lo;
    int b[hi+1];
    while(i<=mid && j<=hi){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;k++;
        }
        else{
            b[k]=a[j];
            j++;k++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        i++;k++;
    }
    while(j<=hi){
        b[k]=a[j];
        j++;k++;
    }
     for(int i=lo;i<=hi;i++){
        a[i]=b[i];
    }  
}
void mergesort(int a[],int lo,int hi){
    if(lo<hi){
        int mid=(lo+hi)/2;//yahan pe hi n-1 hoga isliye mid+1 se solve kiya hain agar direct 
        //size of n se kheloge to seeedha mid hi aayega aur jahan <=hi/lo hain wahan bhi 
        //changes aayenge.
        mergesort(a,lo,mid);//ye recursive function 1st part of array ko baar baar tukdo 
        //mein todega single element takk then merge function call hoga.
        mergesort(a,mid+1,hi);//^^
        merge(a,lo,mid,hi);
    }  
   
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
//merging of two SORTED ARRAYS.
void merge(int a[],int b[],int c[],int n,int m){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;k++;
        }
        else{
            c[k]=b[j];
            j++;k++;
        }
    }
    while(i<n){
        c[k]=a[i];
        i++;k++;
    }
    while(j<n){
        c[k]=b[j];
        j++;k++;
    }
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int c[n+m]={0};
        
        for(int i=0;i<n+m;i++){
            merge(a,b,c,n,m);
            cout<<c[i]<<" ";
        }
    return 0;
}