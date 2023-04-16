/*  ********LINKED LIST**********
    ---> WHAT ?
    --->It is a Dynamic Data Structure containing many nodes tht can grow/shrink at runtime

    ---> **NODE**
    ---> It has 2 components :
    1- Data
    2- Address of next node

    --->No Memory Wastage
    ---> We can also Dynamically allocate d memory @ runtime by using vector but it is not an optimal bcz
    bcz first new array is created and then we have to copy ......
    --->
*/

#include<iostream>
using namespace std; 

class Node{
public:
    int data;
    Node* next;
    
    //Constructor
    Node(int data){
        this ->data = data;
        this ->next = NULL;
        }
    //Destructor
    ~Node(){
        int value = this -> data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
            }
            cout<<"Memory is free for node with data "<<endl;
    }
};
void insertAthead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAttail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data << " ";
        temp = temp->next;    
        }cout<< endl;

}
void insertAtposition(Node* &head,int position ,int d){
    if(position==1){
        insertAthead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    Node* nodeToinsert = new Node(d);
    nodeToinsert ->next = temp->next;
    temp->next = nodeToinsert;
}
void deleteAtposition(Node* &head ,int position){
    //deleting from 1st posn
    if(position==1){
      Node* temp = head;
      head = head ->next;
      temp ->next = NULL;
      delete temp;
    }
    //deleting from middle or end
    else{
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<=position){
          prev = current;
          current = current ->next;
          cnt++;
        }
        prev->next = current->next;
        current -> next = NULL;
        delete current;
        } 

}
int main(){
    //Creating a node
    Node* node1 = new Node(10);
    //cout<<node1 ->data<<endl;
    //cout<<node1 ->next;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    insertAttail(tail,15);
    print(head);

    insertAttail(tail,20);
    print(head);

    insertAtposition(head,3,30);
    print(head);

    deleteAtposition(head,1);
    print(head);

    deleteAtposition(head,2);
    print(head);


    
    return 0;
}