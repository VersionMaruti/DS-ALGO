#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;

    int i=0,j=0,st=-1,en=-1,sum=0;//-1 isliye liya gaya hain us conditon ke liye jab sum s na ho.

    while(j<n && sum+arr[j]<=s){//sabse pehla loop tab tak chalega jab tak sum s ke barabr ya equal
    //na ho jaaye.
        sum=sum+arr[j];
        j++;
    }
    //ab agar sum s ke equal hain yahin se to to i aur j seedha print kra dengge return 0 kr ke
    // taaki compiler code aage na badhe.
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    
    //agar sum s se jyada hain to sum se kuch gatana padega se array se uske liye i ka use krenge.
    //ye loop tab takk chalega jab tak sum <= s na ho jaaye aur agar sum equal to s hoga yahan pe.
    //to output le lenge yahan se.otherwise i ki value increase ho jayegi 0 se.
    while(j<n){
        sum=sum+arr[j];
        while(sum>s){
            sum=sum-arr[i];
            i++;
            
            if(sum==s){
                st=i+1;
                en=j+1;
                break;
            }
        }
        j++;
    }
    cout<<st<<" "<<en;
    return 0;
}