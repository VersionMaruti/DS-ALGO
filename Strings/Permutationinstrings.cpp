#include<iostream>
using namespace std;
void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);//for dry run:-https://youtu.be/MFEM6F1WwcY

        permutation(ros,ans+ch);
    }
}

int main(){
    permutation("Ma","");
    return 0;
}
//Main Concept for recursion
//1.Jab bhi recursion se solve karna ho problem ko to recursion n ko tukdo mein tod tod kar
//solve karta hain ye soch kar approach karna hain.
//2.Recursive call In a Loop:-****recursive call mein i ki value tabhi iterate karegi jab function
//return karega YAA kisi return karne ke baad uspe koi solutin na mil raha ho for example same
//problem mein hi jab pahela ABC print ho jaata hain aur phir se return karta hain to s C se BC
//ban jaata hain to ye next call B banta hain uspe i 1 pe ch define nhi hoga to woh iterate kar
//0 takk.****** 
//3.Update and Passing of values in recursion:-For example agar humko sum print karna ho 
//(sum=sum+value)ko recursive call ke bahar likhe to har stack mein sum ki value UPDATE
//hoti jayegi aur return par sum waghin rahega jo pahele tha.Wahin jab recursive call
//mein hi likhe to har stack mein sum PASS hoga aur return par wahin pahle waali value
//hi retain rakhega.Isi concept ka use hum Backtracking mein use karte hain isme humein 
//check karna padta hain ki particular stack sahi nhi ya nhi agar nhi to return karna 
//padta hain pahele waali situation ke saath. 