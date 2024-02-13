#include<iostream>
using namespace std;
bool isright(int n,int arr[][7],int row,int col){
     //row
     for(int i=0;i<n;i++){
          if(arr[i][col]==1){
               return false;
          }
     }
     //column
     for(int i=0;i<n;i++){
          if(arr[row][i]==1){
               return false;
          }
     }
     //top left
     int count0=col;
     for(int i=row;i>=0 && count0<n;i--){
          if(arr[i][count0]==1){
               return false;
          }
          count0--;
     }
     //top right
     int count1=row;
     for(int i=col;i<n && count1>=0;i++){
          if(arr[count1][i]==1){
               return false;
          }
          count1--;
     }
     //low left
     int count2=col;
     for(int i=row;i<n && count2>=0;i++){
          if(arr[i][count2]==1){
               return false;
          }
          count2--;
     }
     //low right
     int count3=col;
     for(int i=row;i<n && count3<n;i++){
          if(arr[i][count3]==1){
               return false;
          }
          count3++;
     }
     return true;
}
bool nQ(int n,int arr[][7],int x){
     if(x>=n){
          return true;
     }
    for(int col=0;col<n;col++){
      if(isright(n,arr,x,col)){
          arr[x][col]=1;
          if(nQ(n,arr,x+1)){
               return true;
          }
          arr[x][col]=0;  //Backtracking
     }
    }
    return false;
}
int main(){
     int arr[7][7];
     for(int i=0;i<7;i++){
          for(int j=0;j<7;j++){
               arr[i][j]=0;
          }
     }
     if(nQ(7,arr,0)){
          for(int i=0;i<7;i++){
               for(int j=0;j<7;j++){
                    cout<<arr[i][j]<<" ";
               }cout<<endl;
          }
     }
     
     return 0;
}