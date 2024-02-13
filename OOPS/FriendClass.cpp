#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//Forward declaration
class complex;

class calculator{
    public:

    int sumcomplex(complex ,complex );//Yahan par error na aaye uske liye sirf class ki
    //declaration dete hain baaki class ko jaise pahele class ke fxn ko bahar se call
    //kiye the isme bhi bahar se call karenge.
    
};
class complex{
    int a,b;
    //friend int calculator :: sumcomplex(complex o1,complex o2);//ek class ke fxn ko dusri class
    //ka funtion banate hain.//** EK CLASS KE FUNCTION KO DUSRE CLASS MEIN USE KARNA SEEKHA HAIN YAHAN WITH THAT'S CLASS
    //PRIVATE MEMBERS.
    //Aliter:-Declaring the entire calculator class as friend.
    friend class calculator;
    public:
    void setdata(int v1,int v2){
        a=v1;b=v2;
    }
    void getdata(void){
    cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int  calculator:: sumcomplex(complex o1,complex o2){
        int a=o1.a+o2.a;
        int b=o1.b+o2.b;
         
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;

}    

int main(){
    complex o1,o2;
    o1.setdata(3,4);
    o1.getdata();
    o2.setdata(5,7);
    o2.getdata();

    
    calculator cal;
    cal.sumcomplex(o1,o2);
    return 0;
}