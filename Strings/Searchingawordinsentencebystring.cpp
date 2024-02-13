#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//int main(){
 //   string s;
   // getline(cin,s);
    //string s1;
   // cin>>s1;
   // if(s.find(s1)>=0 && s.find(s1)<s.length()){//SELF SOLVED
    //    cout<<"present"<<endl;
    //}
    //else{
    //    cout<<"not"<<endl;
    //}

    
    //return 0;
//}
int main(){
    string s;
    getline(cin,s);
    string s1;
    cin>>s1;
    string s2;
    bool check=false;
    for(int i=0;i<(s.length()-s1.length())+1;i++){
        s2=s.substr(i,s1.length());
        if(s1.compare(s2)==0){
            check=true;
        }
    }
    if(check==true){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}
