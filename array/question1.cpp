//FIND smallest/largest in array


#include<iostream>
using namespace std;

int main(){

   int nums[]={3,81,-5,1,0};
   int size=5;

   int smallest=INT8_MAX;
   int largest=INT8_MIN;
     for(int i=0;i<size;i++){

       
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
        
        
    }
    cout<<smallest<<endl;
     cout<<largest<<endl;
     

    return 0;
}