#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


// Code for third heading 

    struct Point
    {
        int x,y;
    };
    bool MyOrder(Point p1, Point p2)
    {
        return (p1.x < p2.x);
    }

int main()
{
    // sort Array
    int arr[] = {1,7,10,5,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    for (int i:arr)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    sort(arr,arr+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    
    // Vector sort
    vector <int> v = {2,4,65,1,10,7,72};
    sort(v.begin(), v.end());
    for(int x:v)
    cout << x <<" ";
    cout<<endl;
    sort(v.begin(), v.end(), greater<int>());
    for(int x:v)
    cout << x <<" ";


    cout<<endl;

    // Our Own sorting order

    // Look outside main function

    Point arr2[] = {{10,2},{2,10},{2,4},{1,20},{4,5},{20,1}};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    sort(arr2,arr2+n2,MyOrder);
    for(auto i: arr2)
    {
        cout << i.x <<" "<<i.y<<endl;
    }
    

}