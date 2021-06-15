#include<iostream>
using namespace std;

//+`a[] = [3 8 6 12 10 7] ; p = 7
int Hoarse(int arr[], int low, int high, int p)
{
    swap(arr[p],arr[low]);
    int pivot = arr[low];
    int i = low-1, j=high+1;
    //cout<<arr[low]<<endl;
    while(true)
    {
        do
        {
            i++;
        }
        while (arr[i]<pivot);

        do
        {
            j--;
        }
        while (arr[j]>pivot);
        
        cout<<endl;
        if(i>=j)
        return j;

        swap(arr[i],arr[j]);
        
    }


}

int main()
{
    int n,low,high,p;
    cin >> n >> low>>high>>p;
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    Hoarse(arr1,low,high,p);
    for(int i=low;i<=high;i++)
    {
        cout << arr1[i] <<" ";
    }

}