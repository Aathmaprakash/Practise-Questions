#include<iostream>

using namespace std;

int main(){

    int arr[6]={5,4,8,6,1,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    cout<<"after sorting:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];

    }

    return 0;
}