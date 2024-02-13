#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Price{
    int principal;
    float interest_rate;
    int year;
    float realvalue;
    public:
    Price(){}
    Price(int p,int r,int y);
    Price(int p,float r,int y);
    void show(void);
    
};
Price :: Price(int p,int r,int y){
    principal=p;
    interest_rate=float(r)/100;
    year=y;
    realvalue=principal;
    for(int i=0;i<year;i++){
        realvalue=realvalue*(1+interest_rate);
    }
}
Price :: Price(int p,float r,int y){
    principal=p;
    interest_rate=r;
    year=y;
    realvalue=principal;
    for(int i=0;i<year;i++){
        realvalue=realvalue*(1+interest_rate);
    }
}
void Price :: show(void){
    cout<<"The principal value was "<<principal<<" and after "<<year<<
        " years the real value is "<<realvalue<<endl;
} 
int main(){
    Price pv1,pv2,pv3;

    //Dynamic initialixation:- Same concept as previous lecture that every constructor runs as arguements
    //as difference is here we give input by the user.
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p,y and r"<<endl;
    cin>>p>>y>>r;
    pv1 = Price(p,r,y);
    pv1.show();
    cout<<"Enter the value of p,y and R"<<endl;
    cin>>p>>y>>R;
    pv1 = Price(p,R,y);
    pv1.show();
    return 0;
}