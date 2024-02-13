#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int , int>  mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;/*Rest values will automatically assigned 0.*/
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        cout<<mp[number]<<endl;
    }
    return 0;
}
/*
Map Concepts:-
1.In map storing and fetching both are implemented in O(logn) time complexcity in every cases but in
oredered_map storing and fetching both are implemented in O(1) time complexcity in avg. case and for
worst case it is O(N).
Here worst case happen when there is collision during hashing and large limked list is form for an
only element.

2.If there is a case in which there is large numbers in an array and we can use limited size of hash
array then we have to use division method(hash[arr[i]]%10).Here collision may occurs.

3.map allow every data type and data structure to be as keys but unordered_map allows only specific 
data types like int,string,char etc. but don't allow vector and pair.
*/