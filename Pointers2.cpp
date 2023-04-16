/* *****POINTERS USING ARRAYS*******
arr[i] means *(arr+i) or i[arr] is also the same *(i+arr)
for ex arr[2] is *(arr+2) so it will print/dereference the value at 2nd index 
Memory in symbol table cannot be changed 
for ex : we cannot write arr = arr + 1
*/
#include<iostream>
using namespace std; 

int main(){
    int arr[10] = {1,4,36,6,7,3};
    int *ptr = arr;
    cout<<"Address of first memory block of an array is "<<arr<<endl;
    cout<<"Address of first memory block of an array is "<<&arr<<endl;
    cout<<"Address of first memory block of an array is "<<&arr[0]<<endl;
    cout<<"Address of second memory block of an array is "<<&arr[1]<<endl;

    cout<<"Value at 0th index "<<arr[0]<<endl;
    cout<<"Value at 0th index "<<*arr<<endl;
    cout<<"2nd "<<*arr + 1<<endl;
    cout<<"3rd "<<*(arr + 2)<<endl;
    cout<<"4th "<<arr[3]<<endl;
    cout<<"5th "<<*(arr + 3)<<endl;
    cout<<"6th "<<3[arr]<<endl;
    cout<<"7th "<<*(3+arr)<<endl;

    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *p2= &temp[0];
    cout<<sizeof(p2);
    cout<<endl;

    int array[10];
    /*array = array + 1;  //WE CANNOT CHANGE THE MEMORY IN SYMBOL TABLE
    cout<<array<<endl;
    */
   int *q = &array[0];
   cout<<q<<endl;
   cout<<&q<<endl;
   q = q+1;
   cout<<q<<endl;
   /*CHARACTER ARRAYS 
   The implementation of cout function is different in integer array and character array 
   In integer array the name of array shows the location of first element but this is not possible 
   in character array , in character array it prints entire string

   */
  char ch[6] = "abcde";
  cout<<"--> "<<ch<<endl;

  char *c = &ch[0];
  //Prints Entire string
  cout<<c<<"<--- "<<endl;

  char yoyo = 'z';
  char *t = &yoyo;
  cout<<t<<endl;

  return 0;
}

// PASSING POINTERS IN FUNCTIONS
//ek function m array as a pointer jaata hai 
#include<iostream>
using namespace std; 

void print(int*ptr){
    cout<<*ptr<<endl;
}
void update(int*ptr){
    *ptr = *ptr +1;
}
    int main(){
    int value = 6;
    int *r = &value;

    update(r);
    print(r);


    return 0;
}