/*  *****BUUBLE SORT*******
Every Element Is Compared with neighbour element nd if i>i+1 then swap
In each round the ith largest element will be placed to its right place
there are total n-1 rounds in bubble sort
Time Complexity -----> BEST CASE ---> O(n)
Worst Case ----> O(n^2)
Bubble Sort is a Stable Algorithm
*/
#include<iostream>
using namespace std; 

bool bubbleSort(int arr[],int n){
    int cnt = 0;
    // This For Loop is Showing No. of Rounds
    for(int i=1;i<n;i++){
        bool swapped =false;
        //This Loop is for processing the elements till (n-i)th index
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
                cnt++;
            }
        }
        return cnt;
        //if swapped is still false iska mtlb kuch bhi swap nhi hua or array already sorted h
        if(swapped == false){
            break;
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    
    int size;
    cout << "Enter the size " << endl;
    cin >> size;

    int arr[100];
    cout << "Kindly Enter your Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr,size);
    cout<<"The Sorted Array is "<<endl;
    printarray(arr,size);
    return 0;
}