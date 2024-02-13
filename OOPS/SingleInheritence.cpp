#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class base{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base :: setdata(void){
    data1=10;
    data2=20;
}

int base :: getdata1(void){
    return data1;
}

int base :: getdata2(void){
    return data2;
}

class derived : private base{
    int data3;
    public:
    void process();
    void display();
};

void derived :: process(void){
    setdata();//Visible private hain to setdata derived class mein likha public mein main
    // mein likh sakte.
    data3 = data2*getdata1();//data1 base ka private data hain isliye getdata1();
}

void derived :: display(void){
    cout<<"The value of data1 is "<<getdata1()<<endl;//data1 base ka private data hain isliye getdata1();
    cout<<"The value of data2 is "<<data2<<endl;
    cout<<"The value of data3 is "<<data3<<endl;
}


int main(){
    derived der;
    //der.setdata();
    der.process();
    der.display();
    return 0;
}