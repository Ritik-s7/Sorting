#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i=low, j = mid+1;
    while (i<=mid && j<=high)
    {
        if (arr[i]<=arr[j])
        {
            cout << arr[i]<<" ";
            i++;
        }
        else
        {
            cout<<arr[j]<<" ";
            j++;
        }
    }

        while (j<=high)
        {
            cout << arr[j] <<" ";
            j++;
        }


        while (i<=mid)
        {
            cout << arr[i] <<" ";
            i++;
        }    
}

void merge2(int arr[], int low, int mid, int high)
{
    int n1 = mid-low+1;
    int n2 = high-mid;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
    left[i] = arr[low+i];
    for (int i = 0; i < n2; i++)
    right[i] = arr[mid+1-i];

    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++]; // this is equivalent to arr[k] = left[i]; k++; i++;
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
    
}
int main()
{
    
    int n,low,mid,high;
    cin >> n >>low >>mid >>high;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    merge2(arr,low,mid,high);
for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}