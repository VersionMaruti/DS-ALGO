#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int count=0;//yahan count ko static bhi banan sakte ho aur global variable bhi dono mein hi har dusre
//object ke call par count ko increment ho jayega haan agar count ko private karna ho to static banana
// hi padega

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }//Block mein isliye likha hain jab block jaise hi exit hoga destructor call ho jayega dono n2
    //and n3.Back to main ke baad return 0 se pahele n1 constructor ka destructor call ho jayega.
    cout<<"Back to main"<<endl;
    return 0;
}
