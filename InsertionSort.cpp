#include<iostream>
using namespace std;

//arr[] = [2 5 4 1 10 6 8 11]

// My approach
void InsertionSort(int arr[], int n)
{

     for(int i=1;i<n;i++)
     {
         for (int j = i; j > 0; j--)
         {
             if(arr[j]<arr[j-1])
             swap(arr[j],arr[j-1]);
         }
         for (int i = 0; i < n; i++)
                {
                    cout << arr[i] <<" ";
                }
         cout << endl;
     }
}

// Real code
void InsertionSort2(int arr[], int n)
{

     for(int i=1;i<n;i++)
     {
         int key = arr[i];
         int j = i-1;
         while(j>=0 && arr[j]>key)
         {
             arr[j+1] = arr[j];
             j--;
         }

         arr[j+1] = key;
         for (int i = 0; i < n; i++)
                {
                    cout << arr[i] <<" ";
                }
         cout << endl;
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

    InsertionSort2(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}