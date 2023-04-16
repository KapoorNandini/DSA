#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow " << endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
      if(top>=0){
        return arr[top];
      }
      else{
        cout<<"stack is empty"<<endl;
        return -1;
      }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    stack s(6);
    s.push(12);
    s.push(15);
    s.push(20);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;


    return 0;
}