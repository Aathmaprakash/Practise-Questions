#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;

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


    void deleteatbegining(){
        if(!head){
            cout<<"list is empty"<<endl;
            return ;

        }
        Node *temp=head;
        head=head->next;
        delete temp;
    }

    void display(){
        Node *temp=head;
        while (temp!=NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        
    }

};

int main(){

    LinkedList list;
    list.insert(50);
    list.insert(40);
    list.insert(60);
    list.insert(30);
    list.display();
    list.deleteatbegining();
    list.display();



    return 0;
}