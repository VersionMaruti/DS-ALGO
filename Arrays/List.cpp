#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
// template <class T>
void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
}

int main(){
    list <int> lst;
    int element,size;
    cout<<"Enter the size of the list:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the elements of the vector:";
        cin>>element;
        lst.push_back(element);
    }
    // lst.sort();
    // display(lst);
    list <int> lst1(3);
    list<int>:: iterator iter;
    iter = lst1.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    lst.merge(lst1);
    lst.sort();
    cout<<"List1 after merging:";
    display(lst);
    lst1.reverse();
    display(lst1);
    return 0;
}
/*
We us Lists in place of arrays and vectors sometimes when we need to search aur insert some data in
the list for access array and vector works faster but in insertion and searching lists works faster.
*/