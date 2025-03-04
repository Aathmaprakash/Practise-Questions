#include <iostream>

using namespace std;

int main() {
    int arr[11] = {1,1,1,2,2,3,4,4,5,5,5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0; 
    int count = 1; 

    for (int i = 1; i < size; i++) {
        if (arr[start] == arr[i] && count < 2) { 
            count++;
            start++;
            arr[start] = arr[i];
        } 
        else if (arr[start] != arr[i]) { 
            count = 1;
            start++;
            arr[start] = arr[i];
        }
    }

  
    cout << "Unique elements (at most twice): ";
    for (int i = 0; i <= start; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0; 
}
