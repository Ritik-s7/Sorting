#include<iostream>
using namespace std;
// Naive solution - copy array into temp  array and  the use if conditions to again copy it back to array.


void seperate(int arr[], int n,  int  a, int b)
{
    int low = 0, mid=0, high = n-1;
    while(mid<high)
    {
        if(arr[mid] < a)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid]>b)
        {
            swap(arr[low],arr[high]);
            high--;
            continue;
        }

        else
        mid++;
    }

    
    

}



int main()
{
    int n,a,b;
    cin >> n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    seperate(arr,n,a,b);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}