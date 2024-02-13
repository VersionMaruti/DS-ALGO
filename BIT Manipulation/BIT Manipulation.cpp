#include<iostream>
using namespace std;
int setbit(int n,int Pos){
    return ((n & (1<<Pos))!=0);
}
int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];//isi xorsum mein humare do unique numbers hain inko krne ke liye 
        //hum xorsum ke bit mein right most 1 found krte hain kyunki 1 tabhi aata hain xor mein
        //dono alag hain isse humein ye pata chal jayega ki kisi ek number pe particular positon
        //par 1 hain to arrays mein woh numbers alag kr lenge jin mein uss particular position 
        //par 1 hain to same waale xor se alg ho jayenge aur ek unique number mil jayega.usko
        //xorsum se xor kr denge to dusra unique number bhi mil jayega. 
    }
    int temp=xorsum;
    int getbit=0;
    int Pos=0;
    for(int pos=0;pos<32;pos++){//DOUBT:-yahan 32 krne par niche waale array ka answer mil
    //rha hain lekin dusre waale ke liye.While loop se ye asani se hogya tha solve.
        xorsum=((xorsum>>pos) & 1);
        if(xorsum==0){
            Pos++;
        }
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setbit(Pos+1,arr[i])){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(newxor^temp)<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];//={1 2 3 1 2 3 5 7};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<unique(arr,n)<<endl;
    
    return 0;
}