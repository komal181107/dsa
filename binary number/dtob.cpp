#include<iostream>
using namespace std;


int decitobin(int decinum){
int ans=0,pow=1;

  while(decinum>0){
    int  rem=decinum%2;
    decinum=decinum/2;

    ans+=(rem*pow);
    pow*=10;

    } 
return ans;
}


int main(){

int decinum=50;

cout<<"Binary of "<<decinum<<" is: "<<decitobin(decinum)<<endl;


for( int i=1;i<=10;i++)

{
    cout<<decitobin(i)<<endl;
}
    return 0;
}