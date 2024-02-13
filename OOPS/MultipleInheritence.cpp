#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class base1{
    protected:
    int intbase1;
    public:
    void set_base1(int a){
        intbase1 = a;
    }
};
class base2{
    protected:
    int intbase2;
    public:
    void set_base2(int a){
        intbase2 = a;
    }
};
/*
class derived : visibility mode base1 , visibility mode base{
    class body code;
}
*/

class derived : public base1 , public base2{//private aur protected dono hi case mein ye run
//nhi hoga kyunki usse data member and member fxns dono hi private ho jayenge aur chunki humne
//koi alag se fxn nhi bana rakha h derived mein public ke baad sabko access krne ke liye
//(void fxn(int p) wala fxn)isliye error dega.(JUST FOR FEEL:))
/*
The multiple inherited derived class will look like this:-
Data Members:
       intbase1--->protected
       intbase2--->protected
Member functions :
       set_base1(int)---> public       
       set_base2(int)---> public
       show(void)---> public       
*/
    public:
    void show(void){
        cout<<"The number of base1 is "<<intbase1<<endl;
        cout<<"The number of base2 is "<<intbase2<<endl;
        cout<<"The sum of  numbers is "<<intbase1+intbase2<<endl;
    }
};
int main(){
    derived L;
    L.set_base1(69);
    L.set_base2(96);
    L.show();
    return 0;
}