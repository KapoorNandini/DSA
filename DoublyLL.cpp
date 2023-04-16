//**********DOUBLY LINKED LIST*******88
/* Contains 3 things in 1 Node
1- data
2- previous node
3- next node
*/
#include<iostream>
using namespace std; 

class Node{
public:
   int data;
   Node* previous;
   Node* next;

   Node(int d){
    this -> data = d;
    this ->previous = NULL;
    this ->next = NULL;
   }
};
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}
int getlength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp ->next;
    }
    return len;
}
void insertAthead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->previous = temp;
    head = temp;
    }

void insertAttail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->previous = tail->next;
    tail = temp;
}
void insertAtposition(Node* head,int position,int d){
    if(position==1){
        insertAthead(head,d);
    }
    Node* temp = head;
    int cnt = 0;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    Node* NodeToinsert = new Node(d);
    NodeToinsert->previous = temp->next;
    temp->next = NodeToinsert;
}   

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getlength(head)<<endl;

    insertAthead(head,12);
    print(head);

    insertAttail(tail,15);
    print(head);

    insertAtposition(head,2,20);
    print(head);


    return 0;
}