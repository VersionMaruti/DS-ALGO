#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class employee{
    int id;
    int salary;
    public:
    void setdata(void){
        cout<<"The id of the employee is "<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"The value of the id is "<<id<<endl;
    }
};

int main(){
    employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setdata();
        fb[i].getdata();
    }
    return 0;
}