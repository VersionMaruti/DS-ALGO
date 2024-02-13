/*Add two numbers by using classes as friend functions.*/
// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// class Y;

// class X{
//     int data;
//     public:
//     void set(int value){
//         data=value;
//     }
//     friend void add(X ,Y);
// };
// class Y{
//     int data1;
//     public:
//     void set(int num){
//         data1=num;
//     }
//    friend  void add(X o1,Y o2);
// };
//  void add(X o1,Y o2){
//         cout<<o1.data+o2.data1<<endl;
//     }
// int main(){
//     X a;
//     a.set(3);
//     Y b;
//     b.set(5);
//     add(a,b);
//     return 0;
// }
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class c2;
class c1{
    int val1;
    public:
    void setdata(int a){
        val1=a;
    }
    void getdata(void){
        cout<<val1<<endl;
    }
    friend void swap(c1 &,c2 &);
};
class c2{
    int val2;
    public:
    void setdata(int b){
        val2=b;
    }
    void getdata(void){
        cout<<val2<<endl;
    }
    friend void swap(c1 &,c2 &);
};
void swap(c1 &x,c2 &y){//yahan par call by reference isliye kiye kyunki main mein jo object ki
//call hain woh phir direct value hi legi setdata se .
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main(){
    c1 o1;
    o1.setdata(87);
    c2 o2; 
    o2.setdata(69);
    swap(o1,o2);//Yahan**
   
    cout<<"The value of c1 after swaping is ";
    o1.getdata();
    cout<<"The value of c2 after swaping is ";
    o2.getdata();
    
    return 0;
}