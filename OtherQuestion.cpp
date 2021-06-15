#include<iostream>
using namespace std;

// O(n) solution
long long int func(int x, int y, int n)
{
    long long int f[n+1];
    long long int ans, mAX = 1e9+7;
    f[0] = INT_MAX;
    f[1] = x;
    f[2] = y;
    long long int i;
    for (i = 3; i <= n; i++)
    {
        f[i] = f[i-1]-f[i-2];
    }
    cout << f[n]<<endl ;
    if (f[n]<0)
    ans = (mAX + f[n])%mAX;
    else
    ans = f[n] % mAX;
    return ans;

}

//O(1) solution -  store f[1] to f[6] in array, the the values will start repeating. f[7] = f[1] 
// if n > 6 , then f[n] = f[n%6].


int main()
{
    int x,y,n;
    cin >> x >> y >> n;
    cout << func(x,y,n);
    return 0;
}