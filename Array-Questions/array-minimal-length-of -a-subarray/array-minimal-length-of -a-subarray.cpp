#include<iostream>
#include <climits>
using namespace std;


int main(){


    
    int arr[8] = {1,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target = 4;

    int low=0,high=0;
    int currentsum=0;
    int minlength=INT_MAX;

    while(high<size){
        currentsum+=arr[high];
        high++;

        while(currentsum>=target){
            int window=high-low;
            minlength=min(minlength,window);
            currentsum -= arr[low];
            low++;

        }
        
    }

    if (minlength == INT_MAX)
    {
        cout<<0;
    }
    else{
        cout<<minlength;
    }
    


    return 0;
}