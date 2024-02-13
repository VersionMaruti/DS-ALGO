#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//First visit C++ notes file and read inheritenceintro pdf
class employee{
    public:
    int id;
    int salary;
    employee(int inpid){
        salary=34;
    }
    employee(){
        cout<<"Employee construtor is called"<<endl;
    }//As Programmer is derived from employee so for call ask for a default constructor
    //in employee base class.
    
};
/*Derived Class syntex
class {{Derived class name}} : {{Visibility Mode}} {{Base class name }}
{
    Class members/methods etc;
}
Note:-
1. Default visibility mode is private.
2.Public Visibility mode :- public members of based class becomes public members of derived class.
3.Private Visibility mode :- public members of based class becomes private members of derived class.
4.Private members are never inherited.
*/

//Creating a programmer derived class from employee base class.
class programmer : employee{
    public:
    int languagecode;
    programmer(int inpid){
        id = inpid;
        languagecode = 9;
        cout<<"The programmer construtor is called."<<endl;
    }
    void getdata(void){
        cout<<id<<endl;
    }
};

int main(){
    employee h1(1),h2(2);
    cout<<h1.salary<<endl;
    cout<<h2.salary<<endl;
    programmer skillF(89);
    cout<<skillF.languagecode<<endl;
    skillF.getdata();
    return 0;
}