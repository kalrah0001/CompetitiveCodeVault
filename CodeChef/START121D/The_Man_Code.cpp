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

    int urinals;
    cin>>urinals;
    int maximum=float(urinals)/2;
    int arr[urinals];
    for (int i=0;i<urinals;i++)
    {
        if (i%3==0) arr[i]==1;
    }
    int minimum=0;
    for (int i=0;i<urinals;i++)
    {
        if (arr[i]==1) minimum++;
    }
    cout<<maximum<<" "<<minimum<<endl;

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