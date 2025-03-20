#include<iostream>

using namespace std;

struct Node{
int data;
struct Node* next;

Node(int val){
    data=val;
    next=nullptr;
}
};

class LinkedList{
    public:
    Node *head;
    LinkedList(){
        head=nullptr;
    }

    void insert(int val){
        Node *newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }


    void search(int val){
        Node *temp=head;
        while (temp!=NULL)
        {
            if(temp->data==val){
                cout<<"key "<<val<< " is present in the list"<<endl;
                return;
            }
            temp = temp->next;
            
               
            
        }
        cout<<"key"<<val<<"is not present in the list"<<endl;
        

      

       
    }

};



int main(){
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.search(30);

        


    return 0;
}