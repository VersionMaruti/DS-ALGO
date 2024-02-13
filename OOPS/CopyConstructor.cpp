#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class number{
    int a;
    public:
    number(int num){
        a=num;
    }
    number(){
        a=10;
    }
    //When no copy constructor is found then compiler supplies its copy constructor.
    number(number &obj){
        cout<<"The copy constructor called"<<endl;
        a=obj.a;
    }
    void show(void){
        cout<<"The number is "<<a<<endl;
    }
};
int main(){
    number x,y,z(50);
    x.show();
    number z1(x);//Yahan par agar arguement mein object ho aur class mein copy constructor banaya
    //ho to woh invoke hoga otherwise compiler apna khud ka copyconstructor invoke krega bss
    //arguement mein object hona chahiye.
    z1.show();
    number z2;
    z2=z;//Copy constructor not called because pahele object z2 define hua ,then assignment hua
    //then call hua hain isme copy constructor call krne ke liye:-
    z2.show();
    number z3=z;//ab copy constructor call ho jayega.ek hi line mein hone ke karan.
    z3.show();

    return 0;
}