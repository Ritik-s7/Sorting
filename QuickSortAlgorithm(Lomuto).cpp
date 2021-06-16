#include<iostream>
using namespace std;

int lPartition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i=low-1, j=0;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        } 
    }

    swap(arr[i+1],arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high)
{
    if (low<high)
    {
        int p = lPartition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
    
}

int main()
{
    int n,low,high;
    cin >> n >> low>>high;
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    quickSort(arr1,low,high);

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i];
    }

}


