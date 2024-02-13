//OOPs- Classes and Objects

    //C++ --> Initially Called --> C with classes by stroustroup
    //Classes--> extention of structurs (in C)
    //Structures had limitations
        //   -members are public
        //   -No methods
    // Classes--> structures+more
    //Classes-->can have methods and properties(functions)
    //Classes-->can make few members as private and few as public
    //Structures are typedefed in C++
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//nesting of member function
class binary{
    string s;
    void chk_bin(void);
    public:
    void read(void);
   
    void ones(void);

};
void binary :: read(void){
    cout<<"Print the binary number"<<endl;
    cin>>s;
}
void binary :: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Not Binary"<<endl;
            return;
        }
    }
}
void binary :: ones(void){
    chk_bin();//Nesting is calling a function in a function without showing it to the user.
    //iske through hum function run karwa sakte hain chaahe function private hi kyun na ho.
    //isme humoko b. ki bhi jaroorat nhi padegi.
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else{
            return;
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }cout<<endl;
}

int main(){
    
    binary b;
    b.read(); 
    //b.chk_bin();
    b.ones();
    return 0;
}