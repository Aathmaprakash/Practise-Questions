#include<iostream>
using namespace std;

int main() { 
    int arr[7] = {1, 1, 0, 1, 1, 1, 1};

    int count = 0; 
    int maxi = 0;  

    for (int i = 0; i < 7; i++) {
        if (arr[i] == 1) {
            count++; 
            maxi = max(maxi, count);
        } else {
            
            count = 0; 
        }
    }

    cout << "Max consecutive 1s: " << maxi << endl;

    return 0;
}
