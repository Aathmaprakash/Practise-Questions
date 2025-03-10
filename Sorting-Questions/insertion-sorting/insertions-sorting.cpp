#include<iostream>

using namespace std;


void insertionsorting(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            int temp=arr[j];
            if(temp<arr[i]){
                swap(arr[i],arr[j]);
            }

        }
    }

}

int main(){

    int arr[8] = {5,4,1,2,3,8,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionsorting(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}