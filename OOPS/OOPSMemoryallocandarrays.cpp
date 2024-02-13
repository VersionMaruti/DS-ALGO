//Objects Memory Allocation in OOPs:-the fxns which are described on the class have equal 
//amount of storage in main memory and the other objects which store any thing like int
//char etc. have equal amount of storage in the rest of the memory slot available in the
//main memory.

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class shop{
    int itemid[100];
    int itemprice[100];
    int counter=0;
    public:
    void initcounter(void){
        counter=0;
    }
    void setitem(void);
    void getitem(void);
    
};
void shop :: setitem(void){
    cout<<"Enter the item id no."<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter the price of the item"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: getitem(void){
   for(int i=0;i<counter;i++){
    cout<<"The price of item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;//Maine starting mein
    //jab ye algo padha tha to dimaag mein aaya ki direct for loop laga kar bhi solve kar sakte
    //hain lekin usse kuch naya hota woh toh bss simple array wala hi hota using Classes.Counter
    //use kar ke humko bss main function mein other fxn ko kitna chalana hain usko bss call karna
    //hoga aur isme static data ka bhi fayeda rehta hain.
   }
}

int main(){
    shop b;
     b.initcounter();
    for(int i=0;i<3;i++){
        b.setitem();
    }
    b.getitem();
    return 0;
}