#include<iostream>
using namespace std;
char reverse(string s,int i){
    if(i==-1){
        return 0;
    }
    cout<<s[i];
    reverse(s,i-1);
}

int main(){
    string s;
    getline(cin,s);
    cin>>s;
    int i=s.length();
    reverse(s,i);
    
    return 0;
}
#include<iostream>
using namespace std;
char replace(string s){
    if(s.length()==0){
        return 0;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replace(s.substr(2));
    }
    else{
        cout<<s[0];
        replace(s.substr(1));
    }

}

int main(){
    string s;
    cin>>s;
    replace(s);
    return 0;
}
#include<iostream>
using namespace std;
void Hanoi(int n,char src,char helper,char dest){
    if(n==0){
        return;
    }
    Hanoi(n-1,src,dest,helper);
    cout<<"Move from"<<src<<"to"<<dest<<endl;
    Hanoi(n-1,helper,src,dest);
}

int main(){
    Hanoi(4,'A','B','C');
    
    return 0;
}
#include<iostream>
using namespace std;
string subsequence(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return "";
    }

    subsequence(s.substr(1),ans);
    subsequence(s.substr(1),s[0]+ans);



}

int main(){
    string s;
    cin>>s;
    subsequence(s,"");
    
    return 0;
}
#include<iostream>
using namespace std;
int countpath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=countpath(s+i,e);
    }
    return count;
}
int main(){
    cout<<countpath(0,6)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int count(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int arr[2][n];
    return count(n-1)+count(n-2);//self solved:-agar tile hprizontally rakhoge to (n-2)
    //otherwise (n-1).
}

int main(){
    cout<<count(4)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int count(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

     if(n==2 || n==1){
        return n;
    }
    return count(n-1)+(count(n-2))*(n-1);
}

int main(){
    cout<<count(4)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
bool isright(int n,int arr[][5],int x,int y){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool ratinmaze(int n,int arr[][5],int x,int y,int solarr[][5]){

    if(x==(n-1) && y==(n-1)){
        return true;
    }
    if(isright(n,arr,x,y)){
        solarr[x][y]=1;
        if(ratinmaze(n,arr,x+1,y,solarr)){
            return true;
        }
        if(ratinmaze(n,arr,x,y+1,solarr)){
            return true;
        }
        solarr[x][y]=0;
        return false;
    }
    return false;
}
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int solarr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            solarr[i][j]=0;
        }
    }
    if(ratinmaze(5,arr,0,0,solarr)){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cout<<solarr[i][j]<<" ";
            }cout<<endl;
        }
    }
    return 0;
}