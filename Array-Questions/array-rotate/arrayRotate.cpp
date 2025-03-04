#include <iostream>
#include <vector>

using namespace std;


void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k = 3;
    int n = 6;

    k = k % n;  

   
    reverseArray(arr, 0, n - 1);

   
    reverseArray(arr, 0, k - 1);

   
    reverseArray(arr, k, n - 1);


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
