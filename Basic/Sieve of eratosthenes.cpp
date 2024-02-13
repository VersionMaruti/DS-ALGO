#include<iostream>
using namespace std;
int primesieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j=j+i){//CONCEPT:-jis kisi number pe hum hain uske multiples
            //ko agar eliminate kr de to bache hue prime number honge.HAR BAAR HUMEIN USKE
            //SQUARE SE SHURUAAT KRNI HOTI HAIN.AUR J MEIN I JUMPS KE SAATH UPDATION HOTA 
            //HAIN."CODE HUMESHA 2 SE HI SHURU HOGA JIS RANGE MEIN NUMBERS MAANGE HONGE 
            //UNKO BAHAR LOOP SE OUTPUT LENGE."
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    //Prime Number factorisation
    for(int i=2;i<=m;i++){
        while(m%i==0){
            m=m/i;
            cout<<i<<" ";
        }
    }cout<<endl;
    

    primesieve(n);
    return 0;
}
//prime factor by sieve 
#include<iostream>
using namespace std;
int primefactor(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;//ye loop isliye banaya hain taaki ye assure kar sake ki koi bhi number
        //khud se to divisble to hoga hi agar uska koi smallest prime factor nahin hain
        //eg. 17,19.
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j=j+i){//i ka jo bhi square hoga uska smallest prime factor
            //i hi hoga aur i jumps le kar check krenge ki woh pahle kahin marked to nhi
            //nhi to us ei marked kr denge.
                if(spf[j]==j){
                    spf[j]=i;//ye loop agar spf of 25 hain agar to uski value uske smallest 
                    //prime factor 5 bana degi
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}

int main(){
    int k;
    cin>>k;

    primefactor(k);
    return 0;
}