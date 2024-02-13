#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int m1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>m1[i][j];
        }
    }
     int m2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>m2[i][j];
        }
    }
    int sum[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i][j]=m1[i][j]+m2[i][j];          
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}