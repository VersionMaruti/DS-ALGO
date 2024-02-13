#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream> //it has in-built base drive class with two derive classes.
using namespace std;
/*
The useful classes for working with files in C++ are:
1. ftreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++,you will have to open it.Primarily,There are 2 ways to open
a file:
1.Using the constructor.
2.using the member function open() of the class.
*/
int main()
{
    // Opening files using consturctor
    ofstream out("Sample1.txt"); // Write Operation

    string st2;
    // opening file using constructor and writing it
    string st = "Harry Bhai";
    out << st;

    out.close(); // this close() helps us to write and read in one program.Here first 'Harry Bhai'
    // will be printed to text file and then read it and gives as output.

    // opening file using constructor and reading it
    ifstream in("Sample1.txt"); // Read Operation
    // in >> st2;
    getline(in, st2);
    cout << st2;
    return 0;
}