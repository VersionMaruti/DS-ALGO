//#include<iostream>
//using namespace std;

//int main(){
    //pointer 
    //pointer is basically a data type which stores the address of a variable data type.
    //int a=10;
    //int *b=&a;

    //cout<<a<<endl;//simple a ka output milega
    //cout<<*b<<endl;//a ka output milega
    //cout<<b<<endl;//a ka address dega
    //cout<<&a<<endl;//a ka address dega
    //1.pointer ka hum use isliye hi krte hain jab jumko particular kisi variable ki value
    //ko bhi rakhna ho aur value ko bhi increment krna ho ya other arthmetic operation 
    //lagana ho aur kisi variable ka address store krwana ho.

    //2.pointer par arthmetic operation increment ya +- waale lag sakte hain.

    //pointer to array
    //isko smjhte time humko ye dimaag mein rakhna hoga ki array jo hoti hain woh value ke 
    //saath saath variable ke address ko bhi store krta hain to is &arr lagane ki jarurat
    // nhi padti.
    //int arr[]={10,20,30};
    //cout<<*arr<<endl;//ye sirf 0th elemnt ko read krega;

    //int *ptr=arr;
    //for(int i=0;i<3;i++){
    //    cout<<*ptr<<endl;
    //    ptr++;//arr++ nhi likh sakte kyunki ye illegal hota h C/C++ mein.pointer par increment laga 
        //kar hum kisi bhi array ko store kr sakte.
    //}
    //*arr ke roop mein output lene ke liye
    //for(int i=0;i<3;i++){
     //   cout<<*(arr+i)<<endl;
    //}
    //pointer par wahin data type lagate hain jo variable ka hota hain kyunki jab pointer 
    //pe increment krte hain aur variable integer hain to usme 4 ka increment hoga.
     
 //   return 0;
//}

#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    //pointer to pointer
    int a=10;
    int *pptr=&a;
    int **qptr=&pptr;//ye pointer ka address store krega

    cout<<*pptr<<endl;//simple a ka value dega.
    cout<<**qptr<<endl;//getting the value of a by double pointer.
    cout<<*qptr<<endl;//this is for the address of a.
    cout<<pptr<<endl;//this is also for address of a.
    cout<<qptr<<endl;//this is for address of pointer pptr.*qptr se humko a ka address mila
    //hain pptr ka nahin.
    int c=2;
    int b=4;
    int *cptr=&c;
    int *bptr=&b;

    //swap(c,b);//yahan pe function lagane ke baad bhi variables ki values swap nhi hui kyunki
    //is situation mein swap variable ki values direct function add ho jaa rhi hain jisko
    //"CALL BY VALUE"kehte hain jisme variable ki value direct function mein add ho ja
    //rhi hain.
    swap(cptr,bptr);//orswap(&a,&b);//ismein humne pointers ke through variables ke addresses
    //ko function mein add krwaya hain jisko "CALL BY REFERENCE"kehte hain.
    //shortcut mein yahin hain ki jo last pointer hoga uska address chor kr hum peeche ke
    //sabhi pointers ka address pata kar sakte hain.
    cout<<c<<" "<<b;
    return 0;
}