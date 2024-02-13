#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;

    for(int i=row;i>=1;i--){
        for(int j=1;j<=col;j++){
            if(i==j){
                cout<<"* ";
            }
            else if(i+j==10){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==j){
                cout<<"* ";
            }
            else if(i+j==10){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}