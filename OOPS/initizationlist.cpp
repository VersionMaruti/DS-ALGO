#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Test{
    int a;
    int b;
    public:
    // Test(int i,int j): a(i),b(j)
    // Test(int i,int j): a(i),b(i+j)
    // Test(int i,int j): a(i),b(2 * j)
    // Test(int i,int j): b(j),a(i+b)RED FLAG THIS WILL CREATE A PROBLEM BECAUSE a WILL BE INITIALIZE
    // FIRST AS IT WROTE FIRST IN 7TH LINE.
    Test(int i,int j): a(i),b(a+j)
    {
        cout<<"Constructor Executed"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    Test(3,4);
    return 0;
}