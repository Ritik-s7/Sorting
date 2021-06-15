#include<iostream>
using namespace std;

// Naive Solution - O(n) time and O(n) space
//a[] = [3 8 6 12 10 7] ; p = 7
void partition(int arr[], int l, int h, int p)
{
    int temp[h-l+1];
    int k=0;
    for(int i=l;i<=h;i++)
    {
        temp[i] = arr[i];
    }
    for (int i = l; i <= h; i++)
    {
        if (temp[i]<temp[p])
            arr[k++] = temp[i];
    }

    arr[k++] = temp[p];

    for (int i = l; i <= h; i++)
    {
        if (temp[i]>temp[p])
            arr[k++] = temp[i];      
    }

    for (int i = l; i <= h; i++)
    {
        cout << arr[i] <<" ";
    }
    
}

int main()
{

     int n,l,h,p;
    cin >> n >> l>> h >>p;
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    partition(arr1,l,h,p);


    return 0;
}