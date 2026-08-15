#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

int n=4;
int arr[4]={45,-3,2,6};

int maxSum=INT_MIN;
for(int st=0;st<n;st++){
    int currSum=0;

    for(int end=st;end<n;end++){
        currSum +=arr[end];
        maxSum=max(maxSum,currSum);
    }
  }
    cout<<"max subarray sum="<<maxSum<<endl;

    return 0;
}