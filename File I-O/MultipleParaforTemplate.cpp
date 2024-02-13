#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS(ONE,TWO OR MORE THAN TWO)
template <class T1,class T2......(COMMA SEPERATED)>
class nameofclass{
    //body
}
*/

template<class T1 , class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;

    myClass(T1 a , T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<data1<<endl<<data2;
    }
};

int main(){
    myClass <float , char> obj(4.56,'o');
    obj.display();
    return 0;
}