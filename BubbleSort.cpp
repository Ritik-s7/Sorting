#include<iostream>
using namespace std;


// arr[] = {5 2 14 10 6 8 1}
void bubbleSort(int arr[], int n)
{
    //int n1=n;
    for (int i = 0; i < n-1; i++)
    {
        int j=0;
        bool swaped = false;
        while (j<n-i-1)
        {
           /* for (int i = 0; i < n; i++)
            {
                cout << arr[i] <<" ";
            }
          */  
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                swaped = true;
            }
            j++;
            //cout <<"j = "<<j<<endl;
        }
            if(swaped==false)
            break;
        //n1--;   
    }
}

void bubbleSort2(int arr[], int n)
{
for (int i = n-1; i > 0; i--)
{
    bool swapped = false;
    for (int j = n-1; j > n-i-1; j--)
    {
        if (arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            swapped = true;
        }
        
    }

    if(swapped==false)
    break;
    
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

    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}