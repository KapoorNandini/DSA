/* *******SELECTION SORT*********
Start from i = 0 --> n-1
keep i as minIndex initially
Compare all the elements from i+1 --> n
if any element is less than minIndex then
update minindex
again check all the elements and if no element is less than minindex is found
then swap the minindex with ith element
TIME COMPLEXITY IS SAME IN BEST CASE AND WORST CASE i-e O(n^2)
*/

#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size " << endl;
    cin >> size;

    int arr[100];
    cout << "Kindly Enter your Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    SelectionSort(arr, size);
    cout << "The Sorted Arrray is " << endl;
    printarray(arr, size);

    return 0;
}