/**
 *    author:  hkalra0001
**/

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

// Aliases;

using ll = long long;
using ull = unsigned long long;
using lld = long double;
using vInt = vector<int>;
using vStr = vector<string>;

// Macros

#define fr(i,k,n) for(int i=k;i<n;i++)
#define Fr(i,k,n) for(int i=k;k<=n;i++)
#define trav(arr,var) for(auto& var:arr)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define endl '\n'
#define pb(x) push_back(x)
#define mp make_pair
#define int long long
#define F first
#define S second
// #define LOCAL 

// constants

constexpr ll MOD = 1e9+7;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
// Flags to use : -std=c++17 -fsanitize=address -fsanitize=undefined -o <file_name_without_extension> //
///////////////////////////////////////////// START CODE HERE ////////////////////////////////////////// 
////////////////////////////////////////////////////////////////////////////////////////////////////////


void solve(int tt)
{
    int length;
    cin>>length;
    vInt array;
    fr(i,0,length)
    {
        int k;
        cin>>k;
        array.pb(k);
    }
    sort(all(array));
    int ops=0;
    fr(i,0,array.size())
    {
        if (array[i]==i)
        {
            continue;
        }
        else if (array[i]>i)
        {
            ops+=(array[i]-i);
        }
        else 
        {
            ops+=(i-array[i]);
        }
    }
    cout<<ops<<endl;
}

int32_t main()
{
    fastIO();
    int testcases=1;
    cin>>testcases;
    #ifdef LOCAL
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
 
    for(int tt=1;tt<=testcases;tt++)
        solve(tt);
    return 0;
}