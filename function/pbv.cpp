#include<iostream>
using namespace std;


int fun(int a,int b){
    a=a+10;
    b=b+10;
    return a+b;
}

int main(){
int a=4,b=7;
cout<<fun(a,b)<<endl;

cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;


    return 0;
}
