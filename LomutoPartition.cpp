#include<iostream>
using namespace std;

//a[] = [3 8 6 12 10 7] ; p = 7
void LomutoPartition(int a[], int low, int high ,int p)
{

    int i = low-1;
    swap(a[p],a[high]); // Pivot element should always be at last index for this Algorithm to work
    int pivot = a[high];
    for(int j=low;j<=high-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }

    swap(a[i+1],a[high]);

    for(int i=low;i<=high;i++)
    {
        cout << a[i] <<" ";
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

    LomutoPartition(arr1,low,high,p);

    return 0;
}
