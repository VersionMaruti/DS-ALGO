#include<iostream>
using namespace std;
void towerofhanoi(int n, char src,char helper,char dest){//oralcocept:-TOH mein ye yaad rakho ki
//1 and 2 ko unse ek jyada mein ralhna hain aur second last ko uske next mein pahonchana hain taaki
//last waala free ho sake aur usko destination pe pahumcha sake.
    if(n==0){
        return;
    }

    towerofhanoi(n-1,src,dest,helper);
    cout<<"Move"<<src<<"to"<<dest<<endl;
    towerofhanoi(n-1,helper,src,dest);
}
int main(){
    
    towerofhanoi(4,'A','B','C');
    return 0;
}