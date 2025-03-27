#include<iostream>

using namespace std;

int main(){

        int arr[]={3,3,7,7,10,11,11};

        int size=sizeof(arr)/sizeof(arr[0]);

        int left=0,right=size-1;
        int mid=left+(right-left)/2;

        if(size==1) return arr[left];
        if(arr[left]!=arr[left+1]) return arr[left];
        if(arr[right]!=arr[right+1]) return arr[right];



        while(left<right){

                if(arr[mid]!=arr[mid+1]){
                    if(mid%2==0){
                        left=mid-1;
                    }
                    else{
                        right=mid+1;
                    }
                }
                else if(arr[mid]!=arr[mid-1]){
                    if((mid-1)%2==0){
                        left=mid+1;
                    }
                    else{
                        right=mid-1;
                    }
                }
                else{
                    return arr[right];
                }

        }

        



    return 0;
}