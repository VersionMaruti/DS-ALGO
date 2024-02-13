#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//int main(){
  //  int n;
   // cin>>n;

//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int freq[n];
//    for(int i=0;i<n;i++){
//        freq[arr[i]]=0;
//    }
//    int Maxf=0;
//    int ans=0;
//    for(int i=0;i<n;i++){
    //   (int n=4;
    // int arr[n];
    // arr[7]=69;
    // cout<<arr[7]<<endl;......concept)
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

//    return 0;
//}
int main(){
    string s;
    cin>>s;
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    int Maxf=0;
    char ans='a';
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++){
        cout<<freq[s[i]-'a']<<" ";//yahan s[]-'a' isliye kiya gya hain taaki frequecy ke 
        //arguement mein integer store ho sake.jabki array mein nhi ktna pada tha aisa.if
        //doesn't state about the exclusivity about the charater then take freq size 256.
    }
    for(int i=0;i<26;i++){
        if(freq[i]>Maxf){
            Maxf=freq[i];
            ans=i+'a';//or s[i];
        }
    }
    cout<<Maxf<<endl;
    cout<<ans<<endl;

}