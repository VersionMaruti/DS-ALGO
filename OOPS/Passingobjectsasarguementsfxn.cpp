#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    void complexsum(complex o1,complex o2){//**
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void getdata(void){
        cout<<"The Complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,3);
    c1.getdata();

    c2.setdata(4,5);
    c2.getdata();

    c3.complexsum(c1,c2);
    c3.getdata();
    return 0;
}