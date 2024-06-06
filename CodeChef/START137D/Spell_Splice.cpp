#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

// Aliases

using ll = long long;
using ld = long double;
using ull = unsigned long long;
using vInt = vector<int>;
using vStr = vector<string>;

// Macros

#define int long long
#define pb(x) push_back(x)
#define mp make_pair
#define endl '\n'
#define F first
#define S second
#define MOD 1e9+7
#define fr(i,a,n) for (int i=a;i<n;i++)
#define Fr(i,a,n) for (int i=a;i<=n;i++)
#define loop(i,a,n) for(int i=a;i>n;i--)
#define Loop(i,a,n) for(int i=a;i>=n;i--)
#define trav(arr,var) for (auto& var:arr)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend

// operator overloads

template<typename T>
istream& operator>>(istream &istream,vector<T> &v)
{
    for(auto &it:v)
    {
        cin>>it;
    }
    return istream;
}

template <typename T>
ostream& operator<<(ostream& ostream,const vector<T> &v)
{
    for (auto &it:v)
    {
        cout<<it<<" ";
    }
    return ostream;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
///////////////////////////////////////////////////////////////////////////
//Flags to Use - std=c++17 -Werror fsanitize=address fsanitize=undefined //
////////////////////////////CODE HERE//////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

void solve(int tc)
{

    int N;
    cin>>N;
    vector<pair<int,int>>spells;
    for (int i=0;i<N;i++)
    {
        int a,b;
        cin>>a>>b;
        spells.push_back(mp(a,b));
    }
    vector<int>strengths;

    for (int i=0;i<N-1;i++)
    {
        for (int j=i+1;j<N;j++)
        {
            int mixed_Strength=spells[i].first*spells[j].second+spells[i].second*spells[j].first;
            strengths.pb(mixed_Strength);

        }

    }

    cout<<*max_element(strengths.begin(),strengths.end())<<endl;

}
int32_t main()
{
    fastIO();
    #ifdef LOCAL
        freopen("input.txt","r",stdin);
        freopen("output.txt","r",stdout);
    #endif
    int testcases=1;
    cin>>testcases;
    // auto start=high_resolution_clock::now();
    for (int tc=1;tc<=testcases;tc++)
        solve(tc);
    // auto stop=high_resolution_clock::now();
    // auto duration=duration_case<microseconds>(stop-start);
    // cerr<<"TiMe: "<<duration.count()/1000 << " ms "<<endl;
    return 0;
}