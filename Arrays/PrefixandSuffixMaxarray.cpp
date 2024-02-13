#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int arr[]={5,2,3,4,10};
	int n=5;
	int prefix[n];
	prefix[0]=arr[0];
	for(int i=1;i<n;i++){
		prefix[i]=max(prefix[i-1],arr[i]);
	}
	int suffix[n];
	suffix[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--){
		suffix[i]=max(suffix[i+1],arr[i+1]);
	}
	for(int i=0;i<n;i++){
		cout<<prefix[i]<<" ";
	}cout<<endl;
	for(int i=0;i<n;i++){
		cout<<suffix[i]<<" ";
	}
	return 0;
}