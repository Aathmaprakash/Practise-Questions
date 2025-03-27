// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void push(int arr[],int size,int stack[],int &top){
    if(top>=size-1){
        cout<<"overflow";
    }
    else{
        for(int i=0;i<size;i++){
        top++;
        stack[top]=arr[i];
        }
    }
}

int peek(int stack[], int &top){
     if(top == -1){
        cout<<"empty";
         return -1;
    }
    
        return stack[top];
}

int pop(int stack[], int &top){
    if(top==-1){
        cout<<"empty";
    }
        int popped = stack[top];
    top--;
    return popped;
}

int main() {

   int arr[]={1,2,3,4,5,6};
   
   int size=sizeof(arr)/sizeof(arr[0]);
    int stack[size];
    int top=-1;
    
   push(arr,size,stack,top);

    cout << "Stack: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout<<endl;
    
    
    
    cout << "Peek: " << peek(stack, top) << endl;
    
   
    cout<< "Pop:"<<pop(stack,top)<<endl;
    
      cout << "Stack: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout<<endl;
   
    return 0;
}