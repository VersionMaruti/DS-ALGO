#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
    
};
/*for a protected member
                        Public Mode          Private Mode         Protected Mode

Private Members        Not Inheritable       Not Inheritable      Not Inheritable
Public Members(Base)   Public                Private              Protected
Protected Members      Protected             Private(#)           Protected

(#)Reading of above table:- "Agar koi Protected Member hain base class ka toh Private Mode
mein woh derived class ka Private member ban jayega and protected mode mein woh protected
member ban jayega derived class ka."
*/
class derived : protected base{


};
int main(){
    base o1;
    derived p;
    //cout<<p.a<<endl;-->This will not run since a is a protected member in both of the classes.
    return 0;
}