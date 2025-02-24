#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[6] = {1, 28, 99, 22, 88, 88};
    int n = sizeof(arr) / sizeof(arr[0]); 

    sort(arr, arr + n); 

   
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != arr[n - 1]) {
            cout << "Second largest element: " << arr[i] << endl;
            return 0;
        }
    }

   
    cout << "No second largest element found" << endl;
    return 0;
}
