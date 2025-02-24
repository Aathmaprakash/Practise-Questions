#include <iostream>
using namespace std;

int main() {
    int arr[6] = {0, 1, 0, 3, 12, 0};

    for (int i = 0; i < 6; i++) { 
        for (int j = i + 1; j < 6; j++) { 
            if (arr[i] == 0 && arr[j] != 0) { 
                swap(arr[i], arr[j]);
            }
        }
    }

  
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
