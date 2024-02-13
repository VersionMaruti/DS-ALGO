#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class A{
    int a;
    public:
    A & setData(int a){
        this->a=a;//Basically C++ supports simple syntax so in past we were using this pointer 
        //as implictly when there is same values we have to use this explicitly here.
        return *this;
    }
    void getData(void){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    //this is a keyword which is a pointer which points to the objects which invokes the member
    //function.
    A a;
    a.setData(4).getData();
    //a.getData();
    return 0;
}