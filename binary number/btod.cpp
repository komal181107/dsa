#include<iostream>
using namespace std;

int bintodci(int binum){

    int ans=0,pow=1;
    while(binum>0){
      int  rem=binum%10;
      ans+=rem*pow;


      binum/=10;
      pow*=2;
    }
    return ans;
}

int main(){

int binum=100010101;
cout<<bintodci(binum)<<endl;
    return 0;
}