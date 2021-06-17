#include<iostream>
using namespace std;

int hPartition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i=low-1, j = high+1;
    while (true)
    {
       do
       {
           i++;
       } while (arr[i]<pivot);

       do
       {
           j--;
       } while (arr[j]>pivot);
       
       if(j<=i)
       return j;

       swap(arr[i],arr[j]);
    }
}

void qSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int p = hPartition(arr,low,high);
        qSort(arr,low,p);
        qSort(arr,p+1,high);
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

    qSort(arr1,low,high);

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i];
    }

    return 0;
}