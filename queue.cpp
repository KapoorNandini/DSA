#include<iostream>
using namespace std; 

class queue{
public:
   int *arr;
   int rear;
   int front;
   int size;

queue(){
    int size = 100001;
    arr = new int[size];
    rear = 0;
    front = 0;
}
void enqueue(int data){
    if(rear==size){
        cout<<"queue is full";
    }
    else{
        arr[rear] = data;
        rear++;
    }
}
void dequeue(){
    if(rear==front){
        cout<<"queue is empty "<<endl;
    }
    else{
        arr[front] = -1;
        front++;
        if(front==rear){
            front = 0;
            rear = 0;
        }
    }
}
bool isEmpty(){
    if(rear==front){
        return true;
    }
    else{
        return false;
    }
}
int front(){
    if(front==rear){
        return -1;
    }
    else{
        return arr[front];
    }
}

};
int main(){
    queue q;
    q.enqueue(12);
    q.enqueue(11);
    q.enqueue(20);

    cout<<q.front()<<endl;

    q.dequeue();
    cout<<q.front()<<endl;


    cout<<

    return 0;
}