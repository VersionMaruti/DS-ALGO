#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

/*
Case 1:
Class B: public A{
      //Order of execution of constructor --> first A() then B().
};

Case 2:
Class A: public B,public C{
    // Order of execution of constructor --> B() then C() and A().
}

Case 3:
Class A: public B,virtual public C{
    // Order of execution of constructor --> C() then B() and A().
}
*/

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base 1Class constructor called"<<endl;
    }
    Base1(){}
    void printdatabase1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 Class constructor called"<<endl;
    }
    Base2(){}
    void printdatabase2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};
class derived : public Base1,public Base2{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d) : Base1(a),Base2(b){//(&)
        derived1 = c;
        derived2 = d;
        cout<<"Derived Class constructor Called"<<endl;
    }
    void printdataderived(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};
int main(){
    // Base1 a(1);
    // Base2 b(2);((&) waali method se na karna ho to ye use karna padega)
    // a.printdatabase1();
    // b.printdatabase2();
    derived harry(1,2,3,4);//ISSE YE FAYEDA HUA KI DERIVED CLASS SE SEEDHA BASE CLASS KE 
    //CONSTRUCTOR KO CALL KAR PAAYE HAIN
    harry.printdatabase1();
    harry.printdatabase2();
    harry.printdataderived();

    
    return 0;
}

/*NOTE:-
Constructor in H:-
We already have used this topic at file(InheritenceSyntax.cpp) but it was a very simple example of
this topic.There we used employee base constructor and programmer derived constructor.There we 
inherited employee constructor and to run the derived constructor we have to create a default 
constructor but here we can direct access the inherited constructor via derived class and can
update in main fxn only in one call.
**By understanding this method we can easily change the order of reading of base classes by 
compiler which makes it more significant.

*/