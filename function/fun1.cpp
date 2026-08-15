#include<iostream>
using namespace std;

//min 2 number

int minoftwo(int a, int b){  //parameter
    if(a<b){
        return a;
    }else{
        return b;
    }
}


int main(){

cout<<"min="<<minoftwo(5,9)<<endl;  //argument

    return 0;
}