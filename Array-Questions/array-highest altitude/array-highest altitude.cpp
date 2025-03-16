#include<iostream>
#include<vector>

using namespace std;


int main(){

    int arr[5]={-5,1,5,0,-7};

    vector<int>newmap;
    int size = sizeof(arr) / sizeof(arr[0]);
    newmap.push_back(0);
    int maxi=0;

    for(int i=0;i<size;i++){
        int maximum=newmap.back()+arr[i];
        newmap.push_back(maximum);

        if(maximum>maxi){
            maxi=maximum;
        }
    }

    for(int i=0;i<size;i++){
        cout<<newmap[i]<<endl;
    }
    cout<<maxi<<endl;

    return 0;
}