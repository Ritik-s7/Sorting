#include<iostream>
#include<algorithm>
using namespace std;

// Naive solution - (m+n)log(m+n)

void merge(int arr1[], int arr2[], int n, int m)
{
    
    int arr[m+n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = n; i < m+n; i++)
    {
        arr[i] = arr2[i-n];
    }

    sort(arr,arr+m+n);

     for (int i = 0; i < m+n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Method 2 - Efficient approach - Theeta(m+n) time

void merge2(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j=0;
    while (i<n && j<m)
    {
        if(arr1[i]<=arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        
    }
    
    while (i<n)
    {
        cout << arr1[i] <<" ";
        i++;
    }
    
    while (j<m)
    {
        cout << arr2[j] <<" ";
        j++;
    }    
    
}

int main()
{

     int n,m;
    cin >> n>>m;
    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    merge2(arr1,arr2,n,m);


}