#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void dnfsort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    
    while(mid<=high){
        if(arr[mid]==0){
            int swap=arr[mid];
            arr[mid]=arr[low];
            arr[low]=swap;
            mid++;low++;
        }
        else if(arr[mid]==2){
            int swap2=arr[mid];
            arr[mid]=arr[high];
            arr[high]=swap2;
            high--;
        }
        else{
            mid++;
        }
        
    }
}
int main(){
    int arr[]={1,0,2,1,0,1,2,1,2};
    dnfsort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//Basically koi bhi teen number agar humko kisi array mein diye ho to hum dnf sort algorithm se
//array ko sort kar sakte hain.(Dutch National Flag)
//Mid aur high ke beech ka gap kam karna humara isme main motive rahega .