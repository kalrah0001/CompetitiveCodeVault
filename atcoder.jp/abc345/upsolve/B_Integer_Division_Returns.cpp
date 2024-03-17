#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    long long int x;
    cin>>x;
    if (x%10==0)
    {
        cout<<x/10;
    }
    else 
    {
        while (x%10)
        {
            x++;
        }
        cout<<x/10;
    }
}