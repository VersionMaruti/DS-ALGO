#include<iostream>
using namespace std;
int partition(int arr[],int lo,int hi){
    int pivot=arr[lo];
    int i=lo+1;
    int j=hi;
    int temp;
    while(i<=j){//yahan par = bhi lagana padega kyunki i aur j dono 4 aur 4 ban jayenge
    //'<' par uss conditon par loop run nahin hoga lekin = bhi jod denge to loop run ho
    //jayega aur i aur j 4 aur 3 milenge aur right swaping hogi.
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            //swaping between arr[i] and arr[j].
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    cout<<pivot<<" "<<endl;
    cout<<i<<" "<<j<<endl;
    //swaping between pivot and arr[j] when j crosses i (j<i).
    temp=arr[lo];
    arr[lo]=arr[j];
    arr[j]=temp;
    return j;
}
void Quicksort(int n,int arr[],int lo,int hi){

    if(lo<hi){
        int pi=partition(arr,lo,hi);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
        Quicksort(n,arr,lo,pi-1);//left array sorted
        Quicksort(n,arr,pi+1,hi);//right array sorted
    }
}
int main(){
    int arr[]={3,4,5,12,13};
    int n=5;
    Quicksort(n,arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
//worst case when array is already sorted and best case when pivot switch to the middle position
//in worst case:-(n-1)*(k1n+2)=O(n^2) and in best case:- height of tree*(n-1).....all are just
//hints.
//non stable algo.