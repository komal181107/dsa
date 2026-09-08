#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number" ;
    cin >> n;

    int arr[n];
    cout<<"enter element:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    cin >> target;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target) {
                cout << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }

    cout << "No pair found";

    return 0;
}