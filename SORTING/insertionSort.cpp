
#include <iostream>
using namespace std;

// insertion Sort

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }

        arr[previous + 1] = current;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n = 5;
    int arr[] = {3, 5, 2, 1, 4};
    cout << "Before Sorting: ";
    printArray(arr, n);
    cout << endl;
    InsertionSort(arr, n);
    cout << "After Sorting: ";
    printArray(arr, n);
    cout << endl;
    cout << "Time Complexity: O(n^2)" << endl;
    cout << "Space Complexity: O(1)" << endl;
}