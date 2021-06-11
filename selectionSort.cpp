#include<iostream>
using namespace std;

// arr[8] = [5 1 2 6 14 10 3 0]
void selectionSort(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int min_idx = 0;
        for (int j = 1; j < n; j++)
        {
            if(arr[min_idx]>arr[j])
            {
                min_idx=j;
            }
        }
        temp[i] = arr[min_idx];
        arr[min_idx] = INT_MAX;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

}

// Implemented selection sort
void selectionSort2(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i; j < n; j++)
        {
            if(arr[min_idx]>arr[j])
            {
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
        
    }

}



int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort2(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}