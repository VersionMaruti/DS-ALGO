#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

void reversesentence(string s){

    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!s.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
/*
yahan stack ka use karna smjhna jaruri hain kyunki stack mein LIFO concept lagta hain aur isse 
sentence ko reverse karne mein asani hogyi otherwise direct string bhi use kar sakte hain lekin
woh tricky hoga jo stack ne asaan kar diya hain aur yahi samjhna ki konse data structure ka use
karna sahi rahega hi main hain programming mein.
*/
int main(){
    string s="Hey,how are you doing?";
    reversesentence(s);
    return 0;
}