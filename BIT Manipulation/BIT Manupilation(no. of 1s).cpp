#include<iostream>
using namespace std;
int noofones(int n){
     int count=0;
     while(n){
        n= (n & (n-1));//*ye basicslly short trick base method hain jiska use kevel 
        //number of ones nikalne ke liye krte hain.isse time complexity utni hi ho 
        //jaati hain jitne 1's bit hote hain.Get bit solutin se number of zeroes bhi nikaal
        //sakte.
        count++;
     }
    return count;
}

int main(){
    int n;
    cin>>n;

   
    cout<<noofones(n)<<endl;
    return 0;
}
//#BIT Manipulation:-
//concept01:-koi bhi number n mein 1 minus krte hain to n ke binary number mein jo top right
//1 hain woh flip ho jata hain aur 1 ke peeche ke saare numbers bhi flip ho jaate hain .

//concept02:-jab n & n-1 krte hain to baaki sab n ke equal rehta hain kevel right most 1 hain
//woh change ho jata hain. isi concept ka use uppar waale question mein kiya hain ki jab takk
//compare krte rho jab takk saare top right 1s 0 mein na change na ho jaaye.

//concept03:-jo bhi 2 ki power hoti hain binary mein 10 ki power hoti hain aur 2 ki power ka
//isse ek kam ke saath & 0 hoga.