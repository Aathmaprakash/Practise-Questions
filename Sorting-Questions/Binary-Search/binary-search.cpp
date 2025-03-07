#include<iostream>
#include<algorithm>  

using namespace std;

int main(){
    
    int arr[7] = {5, 8, 9, 1, 2, 6, 3}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size); 

    int low = 0;
    int high = size - 1;
    int target = 4;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            cout << "Element found: " << arr[mid] << endl;
            return 0; 
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << "Element not found" << endl;
    return 0;
}
