
#include <iostream>
using namespace std;

void swap(int *element1, int *element2)
{
    int storeValue = *element1;
    *element1 = *element2;
    *element2 = storeValue;
}

void selectionSort(int arr[], int n)
{
    int i, j, index0;

    for (i = 0; i < n-1; i++)
    {
        index0 = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[index0])
            index0 = j;
        swap(&arr[index0], &arr[i]);
    }
}

int main()
{

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/ sizeof(arr[0]);
    selectionSort(arr, n);

    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

