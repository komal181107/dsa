#include<iostream>
using namespace std;

int main(){
int num=145;
int digitsum=0;

while(num>0){
    int lastdigit=num%10;

    num=num/10;
    digitsum=digitsum+lastdigit;

}
cout<<digitsum<<endl;

    return 0;
}