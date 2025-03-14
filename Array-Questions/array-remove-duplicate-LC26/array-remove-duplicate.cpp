#include<iostream>
using namespace std;

int main(){

    int arr[7]={1,2,2,3,4,4,5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int start=0;
   
    for(int i=1;i<size;i++){

        if(arr[start]!=arr[i]){
            start++;
            arr[start]=arr[i];
             
        }
       
    
    }
    for(int i=0;i<=start;i++){
        cout<<arr[i]<<endl;

    }
    cout << "Size after removing duplicates: " << start + 1 <<endl;
    
    return 0;


}