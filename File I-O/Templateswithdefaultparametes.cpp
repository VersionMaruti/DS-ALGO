#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
template <class T1 = int , class T2 = float , class T3 = char>
class myClass{
    public:
    T1 a;
    T2 b;
    T3 c;
    myClass(T1 x,T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }

};
int main(){
    myClass<> h(69,69.69,'6');
    h.display();
    myClass<float,char,char> g(78.69,'8','x');//agar yahan arugue de diye toh theek otherwise
    //default arguement run ho sakte.
    g.display();
    return 0;
}