#include <bits/stdc++.h>
using namespace std;

// typedefs

#define int long long
#define vInt vector<int>

//  Macros
#define endl '\n'
#define all(x) x.begin(),x.end()
#define pb push_back


void fastInit()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve(int tt)
{
    // your code goes here.

    int x;
    cin>>x;
    if (x>=127)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }

}
int32_t main()
{
    fastInit();
    int testcases=1;
    cin>>testcases;
    for (int tt=1;tt<=testcases;tt++)
    {
        solve(tt);
    }
    return 0;
}