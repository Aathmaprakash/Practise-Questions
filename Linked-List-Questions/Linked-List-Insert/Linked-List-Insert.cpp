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


void insertbegining(int val){

    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;

}

void display(){

    Node *temp=head;
    while (temp!=NULL)
    {
       cout<<temp->data<<"->";
       temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
};

int main(){
    LinkedList list;
    list.insertbegining(10);
    list.insertbegining(20);
    list.insertbegining(30);
    list.display();

    return 0;
}