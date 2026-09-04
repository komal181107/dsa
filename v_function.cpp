#include<iostream>
#include<vector>

using namespace std;

int main(){

vector<int>vec;

cout << "size="  <<vec.size()<<endl;

vec.push_back(35);
vec.push_back(45);
vec.push_back(55);
vec.push_back(75);
cout<<vec.front()<<endl;

cout<<vec.empty()<<endl;
cout << " after push back size="  <<vec.size()<<endl;


vec.pop_back();
for (int val: vec){
    cout<<val<<endl;
}
return 0;
}
