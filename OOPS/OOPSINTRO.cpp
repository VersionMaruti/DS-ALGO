#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class student{
    string name;
    public:
   
    int age;
    bool gender;

    void setname(string s){
        name=s;
    }
    void setdata(int age1,bool gender2){
        age=age1;
        gender=gender2;
    }

    student(){//shallow copy concept
        cout<<"Default Constructor"<<endl;
    }//isme agar main main fxn mein naya name bhi rakhu jaise student x to uspe error nahin
    //dega.

    student(string s,int a,int g){
        name=s;
        age=a;
        gender=g;
    }//parameterised constructor
    student(student &a){
        cout<<"Copyconstructer"<<endl;//deep copy concept
        a.name;
        a.age;
    }
    ~student(){
        cout<<"Destructer Called"<<endl;//Destructer Syntex
    }

    bool operator == (student &a){//Operator Overloading:-operator ko as demand function 
    //karwana hota hain.
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }

    void printinfo(){
        cout<<"Name =";
        cout<<name<<endl;
        cout<<"Age =";
        cout<<age<<endl;
        cout<<"Gender =";
        cout<<gender<<endl;
    }
    void getdata(){
        cout<<"AGE1=";
        cout<<age<<endl;
        cout<<"GENDER2=";
        cout<<gender<<endl;
    }

};
int main(){
    // student a;
    // string s;
    // cin>>s;
    // a.setname(s);
    // a.age=20;
    // a.gender=0;

    // student arr[3];
    // for(int i=0;i<3;i++){
    //     cout<<"Name =";
    //     string s1;
    //     cin>>s1;
    //     arr[i].setname(s1);//aray bana kar main function se output lena ek tareeka
    //     cout<<"Age =";
    //     cin>>arr[i].age;
    //     cout<<"Gender =";
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++){
    //     arr[i].printinfo();
    // }

   
    student a("marcos",20,0);//constructer syntex
        a.printinfo();//constructer bana kar printinfo class mein generate kar ke output lena 
        //dusra tareeka.isme setdata function ka bhi use kar sakte sab tareeke used hain dekho.
         student x;
         x.printinfo();
    student b=a;
    b.printinfo();
     student m;
    m.setdata(69,0);
    m.getdata();
    

    if(a==b){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Notsame"<<endl;
    }
    return 0;
   
}