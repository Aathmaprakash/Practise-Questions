#include <iostream>

using namespace std;

int main() {
    int arr[8] = {5,4,1,2,3,8,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

   
    for (int i=0;i<size-1;i++) {
        int mini=i; 
        for (int j=i+1;j<size;j++) {
            if (arr[j]<arr[mini]) {
                mini=j;
            }
        }
       
        swap(arr[i],arr[mini]);
    }

    
    for (int i=0;i<size;i++) {
        cout <<arr[i];
    }

    return 0;
}
