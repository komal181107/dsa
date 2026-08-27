#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int>arr, int tar){
    int st=0, end=arr.size()-1;

    while(st<=end){
        int mid=(st+end)/2;
    if(tar>arr[mid]){
        st=mid+1;
    }else if(tar<arr[mid]){
        st=mid-1;

    }else{
        return mid;
    }
}

return -1;
}




int main(){

vector<int>arr1={-1,3,4,7,5,4};
int tar1=3;

cout<< binarySearch(arr1,tar1)<<endl;


vector<int>arr2={3,4,5,7,8,9};
int tar2=8;

cout<<binarySearch(arr2,tar2)<<endl;

    return 0;
}