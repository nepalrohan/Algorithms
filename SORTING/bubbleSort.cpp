#include <iostream>
using namespace std;


//bubbleSort 

void bubbleSort(int arr[], int n){

    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main(){



    int n = 5;
    int arr[]={3,4,5,2,1};
    cout<<"Before Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr,n);
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Time Complexity: O(n^2)"<<endl;
    cout<<"Space Complexity: O(1)"<<endl;



    return 0;
}