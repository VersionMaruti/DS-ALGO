#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class base{
    public:
    int var_base;
    void display(void){
        cout<<"The value of var_base is "<<var_base<<endl;
    }
};
class derived : public base{
    public:
    int var_derived;
    void display(void){
        cout<<"The value of var_base is "<<var_base<<endl;
        cout<<"The value of var_base is "<<var_derived<<endl;
    }
};//Example of Run Time Polymorphism:
int main(){
    base obj_base;
    derived obj_derived;
    //Base class se derived class ke object assign karke value attain kari:
    base *base_class_pointer;
    base_class_pointer = &obj_derived;//**//
    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    //Derived class se derived class ke object assign karke value attain kari:
    derived *derived_class_pointer;
    // derived_class_pointer = &obj_base;//Throws an error as it is not permissible in C++.
    /*SO IN LAST...BASE CLASS KA POINTER DERIVED CLASS KE OBJECT KO POINT KAR SAKTA HAIN BUT
    VICE-VERSA IS NOT POSSIBLE.BUT POINT CHUNKI BASE CLASS KA HAIN TO DISPLAY FXN BASE CLASS
    KA CALL HOGA ISE KEHTE HAIN "LATE BINDING".*/
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 1134;
    derived_class_pointer->var_base = 134;/*Kevel permissible nhi hain baaki derived class
    ke pointer se base class ke data ko value assign kar saakte hain jaise yahan kiya h 37 pr*/
    derived_class_pointer->display();
    return 0;
}