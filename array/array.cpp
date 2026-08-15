#include<iostream>
using namespace std;


int main(){
      
    int marks[5]={59,43,756,32,96};
     marks[2]=57;
     

     int size=5;
    //cout<<marks[2]<<endl;
    //double price[]={583,43,3,65,785,86};

    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}