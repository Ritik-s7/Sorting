#include<iostream>
#include<algorithm>
using namespace std;

int chocolate(int arr[], int n, int m)
{
    if(m>n)
    return -1;
    sort(arr,arr+n);
    int res = arr[0+m-1]-arr[0];
    for (int i = 1 ; i < n-m+1; i++)
    {
        res = min(res,(arr[i+m-1])-arr[i]);
    }

    return res;
}

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << chocolate(arr,n,m);
    return 0;
}