#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id of the employee is "<<id<<" the employee of the number is "<<count<<endl;
       
    }
    //Static Member Function
    static void getcount(void){
        // cout<<id; //Throws an error because static member fxn only access the object variable
        //which are static.
        cout<<"The value of the count is "<<count<<endl;
    }
};
//Count is the static data member of class employee 
int employee :: count;//Default value is 0
int main(){
    //agar hum without static data member ke code kre to har objects(b,c,d) ke call par count ki
    //value increment nahin hogi isliye har object call ke liye static data member use kara jaata
    //hain jisse har call mein count increase hota jaata hain.
    employee b;

    b.setdata();
    b.getdata();
    employee :: getcount();//Static Member fxn se hum function class ke kevel naam se run karwa 
    //sakte hain.

    employee c;
    c.setdata();
    c.getdata();
    employee :: getcount();

    employee d;
    d.setdata();
    d.getdata();
    employee :: getcount();
    
    return 0;
}