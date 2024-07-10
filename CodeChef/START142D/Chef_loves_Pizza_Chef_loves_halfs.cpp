/*

    solved by - Harshit Kalra
    please do check - https://github.com/kalrah0001/CompetitiveCodeVault
    cc - @kalracoder
    cf - @hkalra0001
    lc - @hkalra0001
    at - @hkalra0001

*/

#include <bits/stdc++.h>
using namespace std;

// pragmas

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// Name Aliases

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vInt = vector<int>;
using vStr = vector<string>;
using pii = pair<int,int>;

// Macros

#define             endl                '\n'
#define             nline               '\n'
#define             int                 long long
#define             ff                  first
#define             ss                  second
#define             pb(x)               push_back(x)
#define             mp                  make_pair
#define             all(x)              x.begin(),x.end()
#define             allr(x)             x.rbegin(),x.rend()
#define             Mod                 1e9+7

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

template<typename T>
ostream& operator<<(ostream &ostream,vector<T> &v)
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
//flags to use: -std=c++17 -Werror fsanitize=address fsanitize=undefined//
//////////////////////////////////////////////////////////////////////////

bool powerOfTwo(int x)
{
    if (!(x&(x-1))) return true;
    else return false;
}
long long highestPowerof2(long long N)
{
    if (!(N & (N - 1)))
        return N;
    return 0x8000000000000000 >> (__builtin_clzll(N));
}


void solve(int tc)
{

    // logic goes here 
    
    int slices;
    cin>>slices;
    
    if (powerOfTwo(slices)) cout<<0<<endl;
    else 
    {
        cout<<(slices-highestPowerof2(slices))*2<<endl;
    }

}

int32_t main()
{
    fastIO();
    #ifdef LOCAL
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int testcases=1;
    cin>>testcases;
    for (int tc=1;tc<=testcases;tc++)
        solve(tc);
    return 0;
}