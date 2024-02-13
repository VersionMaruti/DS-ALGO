#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class complex{
    int a,b;
    public:
//creating a Constructor-->As we no need to create setdata type fxns after that.
//Constructoe is a special member function with the same name as of the class .
//It is used to initiailize the objects of its class .
//It is automatically invoked whenever a ojects is created .(like default constructor OOPS intro part
//calling of x)

     complex(void; /*for cahr 4:- int a=9*/);//Default arguement
     void getdata(void){
        cout<<"The complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};
 complex :: complex(void){//----> this is a default constructor as it doesn't take any arguements

    a=10;
    b=20;
}
int main(){
    complex c1;//Yahan par agar a ko value assign na karein to default value 9 ho jayegi 
    //agar assign karoge to woh value ho jayegi as default arguement
    c1.getdata();
    return 0;
}

//Characteristics of Constructors

//1. It should be called in the public section of the class
//2. They are automatically invoked whenever the object is created
//3. They cannot return values and do not have return types
//4. It can have default arguements.
//5. We cannot refer to their constructors.