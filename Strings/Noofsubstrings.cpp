#include<iostream>
using namespace std;
void substrings(string s,string ans){
    if(s.length()==0){//CONCEPT:-yahin concept hain Q. MEIN KI EMPTY string  le kar hum yahin
    //sochenge ki usme string ka first character jode ya nahin dono hi case mein ans aur ans+
    //ch lagaenge.
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros=s.substr(1);
    substrings(ros,ans);
    substrings(ros,ans+ch);
}
int main(){
    substrings("Maruti","");
    return 0;
}