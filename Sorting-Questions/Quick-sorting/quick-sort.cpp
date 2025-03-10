#include <iostream>
using namespace std;

void partition(int arr[],int size,int pivot) {
    int i=0,j=0;
    while(j<size){
        if(arr[j]<pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
}

int main() {
    int arr[8]={5,2,6,4,1,3,0,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int mid=size/2;
    int pivot=arr[mid]; 

    partition(arr,size,pivot);

    for (int i=0;i<size;i++) {
        cout<<arr[i];
    }
return 0;
}
