#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class complex{
    int a,b;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    // Below line means that non member - sumComplex funtion is allowed to do anything
    // with my private parts (members)
    friend complex complexsum(complex o1,complex o2);
    void getdata(void){
        cout<<"The complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex complexsum(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setdata(1,4);
    c1.getdata();

    c2.setdata(3,5);
    c2.getdata();

    sum=complexsum(c1,c2);
    sum.getdata();
    return 0;
}
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/