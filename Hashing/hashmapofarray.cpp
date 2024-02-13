#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
/*We use this method in the starting of DS algo for finding the max element of an array without 
any pre-knowledge of Hashing ;).Now afterwards we implement furhter hashing with proper concepts
.*/
// int main(){
//       int n;
//    cin>>n;

//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int freq[n];yaha ye hash array hi hain.
//    for(int i=0;i<n;i++){
//        freq[arr[i]]=0;
//    }
//    int Maxf=0;
//    int ans=0;
//    for(int i=0;i<n;i++){
//     //   int n=4;
//     // int arr[n];
//     // arr[7]=69;
//     // cout<<arr[7]<<endl;
//        freq[arr[i]]++;
//    }
//    for(int i=0;i<n;i++){
//        cout<<freq[arr[i]]<<" ";
//    }
//    for(int i=0;i<n;i++){
//        if(freq[arr[i]]>Maxf){
//            Maxf=freq[arr[i]];
//            ans=arr[i];
//        }
//    }
//    cout<<Maxf<<endl;
//    cout<<ans<<endl;
//     return 0;
// }

int hashh[1000000];//this is only for 10 to the power 7 only.
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    /* int hash[13]={0};Yahan 13 isliye liya hain kyunki kaha gaya hain problem mein 12 takk ke number
    aa sakte hain to 0-12 number ke liye 13 size ka array liya.
    For general we have to define it globally.*/
    for(int i=0;i<n;i++){
        hashh[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        cout<<hashh[number]<<endl;
    }

    return 0;
}