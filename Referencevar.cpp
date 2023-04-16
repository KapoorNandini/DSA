/*  ****REFERENCE VARIABLE******
Ek hi variable ko 2 alg alg naam dena ....
decaration --> int i = a;
           --> int& j = i;
Pass By Value m hamesha copy create hoti h 
reference m new memory create nhi hoti balki vo usi variable ki memory 
ko dikhata h jiska vo reference h
When we want to use heap memory use ---> 'NEW' keyword
when we use stack memory it is called static allocation 
when we use heap memory it is called dynamic allocation 
we cant give name in heap memory it will only return address
for ex to create integer in heap --> new int;
now we can access this memory using pointer 
  --->    int * ptr = new int;
  To create array in heap memory we can write 
  ---> new int[5];
  now we can accesss this array using pointer 
  ---> int *arr = new int[5];
  so total it will be of 28 bytes
  20 bytes in heap memory and 8 bytes in stack memory 
  In static allocation the memory is automatically released 
  whereas in dynamic allocation it is done manually using 'DELETE' keyword
  for ex : int * i = new int;
       --> delete i;
       for deleting array ---> delete []arr
*/
#include<iostream>
using namespace std; 

int getSum(int *arr , int n){
    //we hv used *arr to dynamically access the memory i-e during runtime
    int sum = 0;
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
     
    //variable size array 
    int *arr = new int[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int ans = getSum(arr,n);
    cout<<"The answer is "<<ans<<endl;

    return 0;
}