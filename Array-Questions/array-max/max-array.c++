#include<algorithm>
#include<bits/stdc++.h>

#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,7,8,99,1,2};

    int max=arr[0];
    for(int i=0;i<=6;i++){
            if(arr[i]>max){
                max=arr[i];
            }
    }
    cout<<max<<endl;
    return 0;
}
