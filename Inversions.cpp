#include<iostream>
using namespace std;

// arr[] = [2 1 5 3 8 9]

// Naive Slution - O(n^2)
int inversions(int arr[], int n)
{
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j])
            count++;
        }
        
    }

    return count;

}

// Better Approach = O(nlogn)
// after sorting arr[] = [1 2 3 5 8 9]

int countAndMerge(int arr[], int low, int mid, int high)
{
        int n1 = mid-low+1;
        int n2 = high-mid;
        int left[n1], right[n2];
        int res=0;

        for(int i=0;i<n1;i++)
        {
            left[i] = arr[low+i];
        }

        for(int i=0;i<n2;i++)
        {
            right[i] = arr[mid+1+i];
        }

        int i=0, j=0, k=low;
        while(i<n1 && j<n2)
        {
            if (left[i]<right[j])
            {
                arr[k] = left[i];
                i++;
            }
            else
            {
                arr[k] = right[j];
                j++;
                res = res + (n1-i);
            }
            k++;
        }

        while (i<n1)
        {
            arr[k] = left[i];
            i++;
            k++;
        }

        while (j>n2)
        {
            arr[k] = right[j];
            j++;
            k++;
        }
        return res;
}

int inversion2(int arr[], int low, int high)
{
    int mid = low + (high-low)/2;
    int res = 0;
    if(low<high)
    {
    res += inversion2(arr,low,mid);
    res += inversion2(arr,mid+1,high);
    res += countAndMerge(arr,low,mid,high);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout<<inversion2(arr1,0,n);

    return 0;
}
