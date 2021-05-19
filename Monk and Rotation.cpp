#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;

void res1(vector<ll> v, ll step, ll n)
{
    
    for (ll i = (n - step); i < n; i ++)
    {
        cout << v[i] << " ";
    }
    for (ll i = 0; i < (n - step); i ++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ll t = 0;
    cin >> t;
    while (t --)
    {
        ll n = 0, step = 0, x = 0;;
        cin >> n >> step;
        vector<ll> v;
        
        for (ll i = 0; i < n; i ++)
        {
            x = 0;
            cin >> x;
            v.push_back(x);
            
        }
        step = (step >= n)? step % n : step;
        
        res1(v, step, n);
    }
    return 0;
}