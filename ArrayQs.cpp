//**Reversing Alternate elements in an array***
/*#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapAltenate(int arr[] ,int size){
    for(int i =0;i<size;i+=2){
        if((i+1)<size){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}
int main(){
    int even[8] = {2,4,6,8,1,0,7,5};
    int odd[5] = {11,56,43,27,10};

    swapAltenate(even,8);
    printArray(even,8);
    swapAltenate(odd,5);
    printArray(odd,5);


    return 0;
}
*/

//**Find Unique Element**//
// a^a = 0
// a^0 = a
/*#include<iostream>
using namespace std;

void FindUnique(int* arr,int size){
int ans = 0;
for(int i=0;i<size;i++){
    ans = ans^arr[i];
    cout<<ans;
}
}
int main(){
    int arr[7] = {1,7,3,1,7,3,4};
    FindUnique(arr,7);
    return 0;
}
*/

//**INTERSECTION OF 2 ARRAYS****

/*#include <bits/stdc++.h>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i=0 , j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if
            (arr1[i]<arr2[j]){
             i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
*/
/*#include<iostream>
using namespace std;

void SortOne(int arr[],int n){
    int i = 0, j = n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
          swap(arr[i],arr[j]);
          i++;
          j--;
        }
    }

}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[8] = {1,1,0,0,0,0,1,1};

    SortOne(arr,8);
    printArray(arr,8);


    return 0;
}
*/
/*
//****TO SORT 0,1,2*****

#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int start = 0 , end = n-1 , mid = 0;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            mid++;
            start++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[end]);
            end--;
        }
    }
   //   Write your code here
}
*/

#include<iostream>
using namespace std;

void reversearray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int n){
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reversearray(arr,n);
    printarray(arr,n);
    return 0;
}