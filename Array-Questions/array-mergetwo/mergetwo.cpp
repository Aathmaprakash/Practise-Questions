#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr1[6]={1,2,3,4,5,6};
    int arr2[5]={1,2,3,4,5};

    vector<int>result;
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int size3=size1+size2;

    

    return 0;
}