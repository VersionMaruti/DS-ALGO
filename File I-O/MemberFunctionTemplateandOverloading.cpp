#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
template <class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data = a;
    }
    void display();
};

template <class T >
void Harry<T> ::  display(){
    cout<<"The value of a is "<<data<<endl;
}
void func(int a){
    cout<<"I am the first func() "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am the first func()"<<a<<endl;
}
int main(){
    // Harry<float> h(3.67);   
    // Harry<char> h('c');   
    // Harry<int> h(3);   

    func(4);//Exact match takes the highest priority.
    return 0;
}