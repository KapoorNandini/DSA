/* *****ARRAYS****
---->  TO USE ALL THE PRE DEFINED FUNCTIONS AND DATA STRUCTURES --->  #include<bits/stdc++.h>
---> LIST of Similar kind of items
---> Contiguous Block of Memory
---> Can Access all the values in an array using INDEX
---> WHY ARRAY?
-> ***Multiple values can be stored in a single variable***
---> DECLARATION OF AN ARRAY
-> data_type array_name[size of array];
for ex int arr[10]; This is an array of size 10
arr is the name of array ALSO it is pointing the first location or the 0th
index of an array and will show the address of 1st location
---> INDEX will go from 0 to (n-1) where n is the size of array
---> To initialize the entire array with a constt number we can use
fill_n keywword
-> Syntax for fill_n is fill_n(array_name , size , number to initialize entire array)
It can be any number - positive or negative i-e All integers can be used to initialize an entire array
with fill_n keyword

---> If we XOR the same element the ans wil be 0 
for ex a^a = 0
and 0 ^ a = a

Vector --> Dynamic array

*/

// #include <iostream>
// using namespace std;

// void printarray(int arr[], int size)
// {
//     for (int i = 1; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// void printchararray(char arr[] , int size){
//     for(int i = 0 ; i<size; i++){
//         cout << arr[i] <<" ";
//     }
// }

// int main()
// {
//     // Declaration of array
//     // int arr[10]={};

//     // //Printing the element at various positions in an array
//     // cout<<"The value at 0th index is "<<arr[0]<<endl;
//     // cout<<"The value at 1th index is "<<arr[1]<<endl;
//     // cout<<"The value at 2th index is "<<arr[2]<<endl;
//     // cout<<"The value at 20th index is "<<arr[20]<<endl;

//     // Printing the addresses of various locations in an array
//     //  cout<<"The address of 1st location of array "<<&arr[0]<<endl;
//     //  cout<<"The address of 2st location of array "<<&arr[1]<<endl;
//     //  cout<<"The address of 3st location of array "<<&arr[2]<<endl;
//     //  cout<<"The address of 4th location of array "<<&arr[3]<<endl;

//     // //Printing the size of element in an integer array
//     // cout<<"The size of 1st element of array "<<sizeof(arr[0])<<endl;
//     // cout<<"The size of 2st element of array "<<sizeof(arr[1])<<endl;

//     // //Initialization of an Array
//     // int arr[4] = {1,5,6,8};
//     // //Printing entire array initialized with a constt number
//     // int arr[10];
//     // fill_n(arr ,10, -24);
//     // for(int i = 0; i<10 ; i++){
//     //     cout<<arr[i]<<" ";
//     // }

//     // Using functions to print array
//     int funcarray[20] = {10, 2, 3, 5, 36, 8};
//     printarray(funcarray, 10);
//     cout << endl;

//     // CREATING A CHARACTER ARRAY
//     char ch[5] = {'a', 'b', 'c', 'd', 'e'};
//     cout << "The value at 3rd index is " << ch[3] << endl;
//     printchararray(ch , 5);
//     return 0;
// }


//*****PROGRAM FOR PRINTING THE MAX AND MIN ELEMENT OF AN ARRAY*******
/*
#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int getMIN(int arr[] , int n){
    int MIN = INT_MAX;
    for(int i = 0 ; i<n;i++){
       // if(arr[i]<MIN){
       //     MIN = arr[i];
       // }

       //CAN ALSO USE PREDEFINED FUNCTIONS 
       MINI = min(arr[i] , MINI);
    }
    return MINI;
}
int getMAX(int arr[] , int n){
    int MAX = INT_MIN;
    for(int i = 0 ; i<n;i++){
       // if(arr[i]>MAX){
       //     MAX = arr[i];
       // }
       MAXI = max(arr[i] , MAXI);
    }
    return MAXI;
}
int main(){
    int size;
    cout<<"ENTER THE SIZE"<<endl;
    cin>>size;

    int arr[100];
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
    cout<<"The Maximum Number is "<<getMAX(arr , size)<<endl;
    cout<<"The Minimum Number is "<<getMIN(arr , size)<<endl;
    return 0;
}
*/

//****PROGRAM FOR LINEAR SEARCH******////
/*
#include<iostream>
using namespace std; 

bool linearsearch(int arr[] , int n , int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i = 0 ; i< size ; i++){
        cin>>arr[i];
    }

    cout<<"ENTER THE ELEMENT U WANT TO SEARCH "<<endl;
    int key;
    cin>>key;

    bool found = linearsearch(arr,size,key);
    if(found){
        cout<<"KEY IS PRESENT"<<endl;
    }
    else{
        cout<<"KEY IS ABSENT"<<endl;
    }
     return 0;
}
*/

//****REVERSING AN ARRAY*****
/*
#include<iostream>
using namespace std; 

void reversearray(int arr[] , int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
    start++;
    end--;
    }
    }

void printarray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The reverse array is "<<endl;
    reversearray(arr,size);
    printarray(arr,size);

    return 0;
}
*/

//*****PRINTING SUM OF ALL THE ELEMENTS IN AN ARRAY*******

/*#include<iostream>
using namespace std; 

int sum(int arr[] ,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}


int main(){
    int size;
    cout<<"ENTER THE SIZE"<<endl;
    cin >> size ;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The sum is "<<sum(arr,size);
    return 0;
}
*/

