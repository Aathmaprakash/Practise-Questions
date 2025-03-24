#include<iostream>

using namespace std;


int maxsub(int arr[],int size){

int maxi=INT_MIN;
int sum=0;

for(int i=0;i<size;i++){

    sum+=arr[i];

    if(sum>maxi){
        maxi=sum;   
    }

    if(sum<0)
{
    sum=0;
}

}

return maxi;



}

int main(){

    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};

    int size=sizeof(arr)/sizeof(arr[0]);

    int result=maxsub(arr,size);

    cout<<"Maximum subarray:"<<result;
return 0;

}