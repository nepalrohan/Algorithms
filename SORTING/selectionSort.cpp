#include <iostream>
using namespace std;

// Selection Sort

void Selection_Sort(int arr[], int n)
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

        swap(arr[i], arr[minIndex]);
    }
}


void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{

    int n = 5;
    int arr[] = {3, 4, 5, 6, 1};
    cout << "Before sorting: ";
    printArray(arr, n);
    cout << endl;
    Selection_Sort(arr, n);
    cout << "After sorting: ";
    printArray(arr, n);
    cout << endl;
    cout << "Time complexity: O(n^2)" << endl;
    cout << "Space complexity: O(1)" << endl;

    return 0;
}