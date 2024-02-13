#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;
/*
Second method to write or read a file using pre-defined ofstream or ifstream member function 
open().
*/
int main(){
    ofstream out;
    out.open("Sample1.txt");
    out<<"This is me\n";
    out<<"This is a code for read/write of file I-O\n";
    out.close();//Create a habit for closing the the file via this syntax.

    ifstream in;
    in.open("Sample1.txt");
    string st;
    // getline(in,st);
    // getline(in,st2);One method which is done by me .
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}