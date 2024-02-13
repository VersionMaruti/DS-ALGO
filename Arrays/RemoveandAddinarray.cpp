#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int removekey(int arr[],int remove,int size){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==remove){
            break;
        }
    }
    if(i<size){
        for(int j=i;j<size;j++){
            arr[j]=arr[j+1];
        }
        return size-1;
    }
    
    return size;
}
int* addelement(int arr[],int ele,int index,int size){
    int* newarr = new int[size+1];
    for(int i=0;i<index;i++){
        newarr[i]=arr[i];
    }
    newarr[index]=ele;


    for(int j=index;j<size;j++){
        newarr[j+1]=arr[j];
    }
    size++;

    return newarr;
}
int main(){
    int size=6;
    int arr[size]={3,7,6,8,9,10};
    int remove=8;
    int add=1;
    // removekey(arr,remove,6);
    int index=2;
    
    int* newarr = addelement(arr,add,index,size);
    for(int i=0;i<=size;i++){
        cout<<newarr[i]<<" ";
    }cout<<endl;

    delete[] newarr;
    return 0;
}