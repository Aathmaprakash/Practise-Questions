#include<iostream>

using namespace std;

int main() {
    int arr[6] = {7, 5, 1, 6, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int mini = arr[0]; 
    int maxProfit = 0;

    for (int i = 1; i < size; i++) {
        if (mini > arr[i]) {  
            mini = arr[i]; 
        } else {
            maxProfit = max(maxProfit, arr[i] - mini);
        }
    }

    cout << "Max Profit: " << maxProfit << endl;  

    return 0;
}
