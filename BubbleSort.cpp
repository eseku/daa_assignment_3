
#include <iostream>
using namespace std;

void swap(int *element1, int *element2)
{
    int storeValue = *element1;
    *element1 = *element2;
    *element2 = storeValue;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
      for (int j = 0; j <n-1-i; j++)
      {
          if(arr[j] > arr[j+1])
          {
             swap(&arr[j], &arr[j+1]);
          }
      }
    }

}

int main()
{

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/ sizeof(arr[0]);
    bubbleSort(arr, n);

    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

