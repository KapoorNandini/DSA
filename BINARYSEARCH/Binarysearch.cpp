/* **********BINARY SEARCH***********
CONDITION --->  Elements should be in Monotonic Function
STEPS
Find Mid Element
Compare Mid with Key
IF = then return index
IF != Decide Part
Then Steps are repeated
To Avoid the Overflow of Integer Range we will use the formula of mid as (START + (END-START)/2) Instead of (START+END)/2
TIME COMPLEXITY -------> O(log n)
*/

#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size " << endl;
    cin >> size;

    int arr[100];
    cout << "Enter the Elements " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int index = binarysearch(arr, size, key);
    cout << "The index is " << index << endl;

    return 0;
}