#include<iostream>
using namespace std;

bool check(int a,int b,int c){
    int x=max(a,max(b,c));//maximum no. define kiya hain .
    int y,z;

    if(x==a){
        y=b;
        z=c;
    }
    else if(x==b){
        y=a;
        z=c;
    }
    else{
        y=a;
        z=b;
    }
    if(x*x==y*y+c*c){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c)){
        cout<<"pythagorus triplet"<<endl;
    }
    else{
        cout<<"not pythagorus triplet"<<endl;
    }
    return 0;
}