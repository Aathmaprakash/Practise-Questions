#include<iostream>

using namespace std;

int main(){
        int arr[7]={2,2,1,1,1,2,2};
        int size = sizeof(arr) / sizeof(arr[0]);

        int start=0;
        int count=1;

        for(int i=1;i<size;i++){

            if(arr[start]==arr[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                start = i;
                count = 1;
            }
        }

        cout << "Majority Element: " << arr[start] << endl;  
        
        return 0;
}