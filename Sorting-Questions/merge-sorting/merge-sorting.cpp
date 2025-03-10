#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[8] = {5,4,1,2,3,8,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int mid=size/2;
    int left=0;
    int right=size;

    int n1 = mid-left+1;
    int n2 = right-mid;

vector<int>arr1(n1),arr2(n2);

for(int i=0;i<n1;i++){
    arr1[i]=arr[left];

}
for(int j=0;j<n2;j++){
    arr2[j]=arr[mid+1+j];
}




    return 0;
}