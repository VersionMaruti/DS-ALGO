#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
template <class T>
void swapp(T &a , T &b){
    T temp = a;
    a = b;
    b = temp;
}
template <class T1,class T2>
float Average(T1 a ,T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
int main(){
    float x = Average(5,2);
    printf("The average value is %.3f\n",x);
    int a=5;
    int b=7;
    swapp(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}