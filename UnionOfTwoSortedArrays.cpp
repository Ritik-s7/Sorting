#include<iostream>
#include<algorithm>
using namespace std;

// arr1[] = [1 1 2 3 3 3 3 4 5]
// arr2[] = [3 3 4 5 6 6 7 ]
// o/p = [1 2 3 4 5 6 7]

// Naive Approach - O((m+n)*log(m+n))
void union1(int arr1[], int arr2[], int n1, int n2)
{
    int c[n1+n2];
    for(int i=0;i<n1;i++)
    c[i]=arr1[i];
    for(int i=0;i<n2;i++)
    c[n1+i]=arr2[i];
    sort(c,c+n1+n2);

    for (int i = 0; i < n1+n2; i++)
    {
        if (c==0 || c[i]!=c[i-1])

        cout<<c[i]<<" ";
        
    }
}

// Efficient Approach _ Theeta(n1+n2)
void union2(int arr1[], int arr2[], int n1, int n2)
{
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        {
            i++;
            continue;
        }
        if(j>0 && arr2[j]==arr2[j-1])
        {
            j++;
            continue;
        }

         if(arr1[i]==arr2[j])
         {
            cout << arr1[i] <<" ";
            i++;
            j++;
         }

         else if(arr1[i]<arr2[j])
         {
            cout << arr1[i] <<" ";
            i++;
         }

         else if(arr1[i]>arr2[j])
         {
            cout << arr2[j] <<" ";
            j++;
         }
            
        }

        while(i<n1)
        {
            if(i>0&&arr1[i]==arr1[i-1])
            {
                i++;
                continue;
            }

            cout << arr1[i]<<" ";
            i++;
        }

        while(j<n2)
        {
            if(j>0&&arr2[j]==arr2[j-1])
            {
                j++;
                continue;
            }

            cout << arr2[j]<<" ";
            j++;
        }
    }

int main()
{
    int n1,n2;
    cin >> n1 >>n2;
    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    union1(arr1,arr2,n1,n2);
    return 0;
}