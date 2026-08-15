#include<iostream>
using namespace std;
 

int factorial(int n){
    int fact=1;

    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}


int ncr(int n,int r){
     int fact_n=factorial(n);
     int fact_r=factorial(r);
     int facr_nmr=factorial(n-r);


     return fact_n/(fact_r*facr_nmr);
}

int main(){
  int n=5,r=3;

cout<<ncr(n,r)<<endl;

    return 0;
}