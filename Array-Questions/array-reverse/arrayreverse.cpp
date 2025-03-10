#include<iostream>
#include<vector>

using namespace std;

int main(){

        int arr[6]={1,2,3,4,5,6};

        vector<int>reverse;

        for (int i = 5; i>=0; i--)
       {
        reverse.push_back(arr[i]);
        }
        
        for (int i = 0; i<reverse.size(); i++)
        {
            cout<<reverse[i]<<" ";
            }
            return 0;
        }
