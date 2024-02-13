#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};

class derived : public base1 , public base2{
    public:
    void greet(){
        base1 :: greet();//dono base class se bane iss derived class se hum agr main fxn se greet()
        //ko call karein toh ambiguity aayegi usko solve krne ke liye ye syntax lagana padta hain
        //jisse decide hota hain ki agar derived class se greet() call ho to kaunse waale base class
        //ko invoke karna hain.
        //ambiguity uss time self resolve ho jayegi jab isme hum fxn ko update kr de derived mein.
        // cout<<"Lavda Mera"<<endl;
    }
};

class B{
    public:
    void say(){
        cout<<"Hello World"<<endl;
    }
};
class D : public B{
    public:
    //D's new say()method will override B's say()method here. 
    void say(){
        cout<<"How was your day?"<<endl;
    }
};
int main(){
    //Ambiguity 1
    base1 o1;
    o1.greet();
    base2 o2;
    o2.greet();
    derived o3;
    o3.greet();
    //Ambiguity 2
    // D o4;
    // o4.say();
    return 0;
}