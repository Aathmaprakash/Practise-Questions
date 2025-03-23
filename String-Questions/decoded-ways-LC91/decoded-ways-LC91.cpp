#include<iostream>
#include<vector>


using namespace std;

int decoding(string value,int size){

    vector<int>mp(size+1,0);
    mp[0]=1;
    mp[1]=value[0]!='0'?1:0;

    for(int i=2;i<=size;i++){
        int onedigit=stoi(value.substr(i-1,1));
        int twodigit=stoi(value.substr(i-2,2));

        if(onedigit>=1){
            mp[i]+=mp[i-1];
        }
        if(twodigit>=10 && twodigit<=26){
            mp[i]+=mp[i-2];
        }
       
    }
    return mp[size];

}

int main(){

    string value="256";
    int size=value.size();
    
  
    int result=decoding(value,size);

    cout<<"number of ways : "<<result;
   
    return 0;
}