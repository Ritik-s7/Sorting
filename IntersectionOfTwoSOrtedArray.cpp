#include<iostream>
using namespace std;
// arr1[] = [1 1 2 3 3 3 3 4 5]
// arr2[] = [3 3 4 5 6 6 7 ]
// o/p = [1 2 3 4 5]

// Naive Solution - O(n1*n2)
void Intersection(int arr1[], int arr2[], int n1, int n2)
{
    
    for (int i = 0; i < n1; i++)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        continue;
        else
        {
            for (int j = 0; j < n2; j++)
            {
                if(arr1[i]==arr2[j])
                {
                    cout << arr1[i] <<" ";
                    break;
                }
            }   
        }
    }
}

// Efficient solution - 
void intersection2(int arr1[], int arr2[], int n1, int n2)
{
    int i=0, j=0;
    while(i< n1 && j< n2)
    {
        if (i>0 && arr1[i]==arr1[i-1])
        {
        i++;
        continue;
        }
        else
        {
            if(arr1[i]<arr2[j])
            i++;

            if(arr1[i]>arr2[j])
            j++;

            if(arr1[i]==arr2[j])
            {
                cout << arr1[i]<<" ";
                i++;
                j++;
            }
        }
        
        
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

   intersection2(arr1,arr2,n1,n2);
    


    return 0;
}