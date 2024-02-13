#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

//Distance Between Two points
class point{
    int x,y;
    public:
    point(int a,int b){-->//This is parameterised consturctor as it takes parameters. 
        x=a;
        y=b;
    }
    // point(){//alternate method.
    //     cout<<"Default Constructor"<<endl;//ans object ko run karwane ke liye jo intro mein
    //hain oops ke default waale point mein .
    // }
   
    // void distance(point o1,point o2){
    //     float d=((o2.x-o1.x)*(o2.x-o1.x)+(o2.y-o1.y)*(o2.y-o1.y));
    //     float val=sqrt(d);
    //     cout<<"The distance betweem the points is "<<val<<endl;
    // }
    point(point o1,point o2){
        float d=((o2.x-o1.x)*(o2.x-o1.x)+(o2.y-o1.y)*(o2.y-o1.y));//self click ;)
        float val=sqrt(d);
        cout<<"The distance betweem the points is "<<val<<endl;
    }
};
int main(){
    point a(0,0);
    point b(1,2);

    // Constructor Overloading :- Calling of multiple construtors in a single class.
    //Constructor is called whose arguements are match with main call.
    point ans(a,b);
    //point ans();
    //ans.distance(a,b);

    
    return 0;
}