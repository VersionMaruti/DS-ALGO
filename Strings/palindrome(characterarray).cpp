#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;//doubt:-loop use kyun nhi kiya

    bool check=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
    }
    if(check==true){
        cout<<"palinderome"<<endl;
    }
    else{
        cout<<"chutiya"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

bool palindrome(char arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-i-1]){
      return false;
      break;
    }
  }
  return true;
}

int main(){
  int n;
  cin>>n;
  char arr[n+1];
  cin>>arr;

  if(palindrome(arr,n)==true){
    cout<<"word is a palindrome"<<endl;
  }
  else{
    cout<<"not"<<endl;
  }


  return 0;
}