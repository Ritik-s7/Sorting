#include<iostream>
#include<algorithm>
using namespace std;

//


// O(nlogn)
int kSmallest(int arr[], int n, int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}

// Better Approach - By Lomutu Partition

int lpartition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    if (low<high)
    {
        for (int j = low; j <= high-1; j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                swap(arr[j],arr[i]); 
            }
        }
        
    }
        swap(arr[i+1],arr[high]);
        return i+1;
    
}
int kSmallest2(int arr[], int n, int k)
{
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int p = lpartition(arr,low,high);
        if(p==(k-1))
        return arr[p];
        else if(p>k-1)
        high = p-1;
        else
        low = p+1;
    }
    return -1;
}

int main()
{
    int n,k;
    cin >> n >> k;
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << kSmallest2(arr1,n,k);
   
    return 0;
}