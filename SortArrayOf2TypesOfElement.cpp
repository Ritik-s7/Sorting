#include <iostream>
using namespace std;

// Naive Solution - O(n) but 3 traversels and O(n) space
void sortEvenOdd(int arr[], int n)
{
    int temp[n];
    int evenCount=0;
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
        if(arr[i]%2==0)
        evenCount++;
    }
    int k=0;
    for (int i = 0; i < n; i++)
    {
        if(temp[i]%2 == 0)
        {
        arr[k] = temp[i];
        k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(temp[i]%2 != 0)
        {
        arr[k] = temp[i];
        k++;
        }
    }  
}

// Efficient Solution - Theeta(n) - only one traversel - O(1) space (Hoare's partition)

void sortEvenOdd2(int arr[], int  n)
{
    int low=-1, high=n;
    while(low<high)
    {
        do
        {
            low++;
        } while (arr[low]%2!=0);
        
        do
        {
            high--;
        } while (arr[high]%2==0);
        
        if(low>=high)
        return;

        swap(arr[low],arr[high]);
    }
}

// Efficient Solution - Theeta(n) - only one traversel - O(1) space (Hoare's partition)

void sortEvenOdd3(int arr[], int  n)
{
    int low=-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2!=0)
        {
            low++;
            swap(arr[low],arr[j]);
        } 
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sortEvenOdd3(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}