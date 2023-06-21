#include <iostream>
#include<math.h>
#define ll long long
using namespace std;

long long int f(int a)
{
    return (ll)2 * pow(a, 3) + pow(a, 2) + (ll)3 * pow (a, 1) + (ll)100; 
}

long long int findRoot(ll P)
{
    long long low = 0, high = P*P ;
    long long money = pow(P, 3);
    while (high > low) 
    {
        long long int mid = (low + high) / (ll)2;
        long long f_mid = money - f(mid);

        if (f_mid == P)
            return mid;
        else if (f_mid > P)
            low = mid + 1;
        else
            high = mid;
    }
    return (low + high) / (ll)2 - 1;
}

int main()
{
    ll n;
    cin >> n;
    long long ans = findRoot(n);
    cout << ans << endl;
}