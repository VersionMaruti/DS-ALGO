#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    //no. of ways of inputing outputing of the string.

    string str0="shootyou";//yahan space dene se koi fayeda nhi hoga kyunnki compiler usko
    //aise hi smjhega ki user doosre inout ke liye space de rha .iske liye getline use
    //krna hoga.
    cout<<str0<<endl;
    string str;

    cin>>str;
    cout<<str<<endl;

    string str1(69,'l');
    cout<<str1<<endl;

    string str2;
    getline(cin,str2);//kisi bhi sentence lo pura print krne ke liye getline function
    //ka use krte hain.Agar hum getline ka use nhi krenge to woh sirf pahele word ko
    //hi print krega.
    cout<<str2<<endl;

    //Dieffernt type of functions in strings:-

    //1. appending two strings
    string s1="fam";
    string s2="ily";
    //if we want to append in s1:-
    //s1.append(s2);
    //cout<<s1<<endl;//if we do not want to change s1 then:-
    cout<<s1+s2<<endl;//or
    //s1=s1+s2;
    //cout<<s1<<endl;
    //2. Clear function
    string abc="ifnaivdsvndkmd";
    abc.clear();
    cout<<abc;
    //3. compare function
    string s3="abc";
    string s4="xyz";
    cout<<s3.compare(s4)<<endl;//compare function basically used for comapring two strings that
    //they are equal or not.
    //4. empty function
    string s5="gvfvvis";
    s5.clear();
    if(s5.empty()){
        cout<<"string is empty"<<endl;
    }
    //5.erase function
    string s6="Iamlost";
    s6.erase(1/*Position*/,6/*Positon se 6 steps*/);//Positon also count as 1
    cout<<s6<<endl;
    //6.find function
    string s7="lostedme";
    cout<<s7.find("lost")<<endl;
    //6. insert function
    string s8="eeyo";
    cout<<s8.insert(2,"lo")<<endl;
    //7.length or size function
    cout<<s8.size()<<endl;
    //8.substringfunction
    string s9="Noobra";
    string s=s9.substr(3,6);//Same concept as erase
    cout<<s<<endl;
    //9.string to integer function and integer to string
    string s10="69";
    int x=stoi(s10);
    cout<<x<<endl;
    int y=69;
    cout<<to_string(y)+"69"<<endl;
    //10. sort function
    string s11="terazikr";
    sort(s11.begin(),s11.end());
    cout<<s11<<endl;//sorting krne ke liye humein ek alg se header file add krni hogi
    //#include<algorithm> aur string ke liye ek header file <string> add kr hi chuke hain.
    return 0;
}