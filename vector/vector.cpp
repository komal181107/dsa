#include<iostream>
#include<vector>
using namespace std;

int main(){
//vector<int>vec
//vector<int>vec={1,2,3,4,5};

//vector<int>vec (8,0);
// cout<<vec[4]<<endl;
// cout<<vec[4]<<endl;
// cout<<vec[4]<<endl;
// cout<<vec[4]<<endl;
// cout<<vec[4]<<endl;
// cout<<vec[4]<<endl;

// for (int i: vec){
//     cout<<i<<endl;
// }

vector<char>vec={'a','b','c','d','e'};


cout<<"size="<<vec.size()<<endl;


for(char val: vec){
    cout<<val<<endl;
}
    return 0;

}