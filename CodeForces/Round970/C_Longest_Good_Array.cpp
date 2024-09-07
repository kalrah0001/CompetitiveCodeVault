/*

    solved by - Harshit Kalra
    please do check - https://github.com/kalrah0001/CompetitiveCodeVault
    cc - @kalracoder
    cf - @hkalra0001
    lc - @hkalra0001
    at - @hkalra0001


    code by
                                                _    _              _____     _____   _    _   _____   _______     _  __             _        _____             
                                               | |  | |     /\     |  __ \   / ____| | |  | | |_   _| |__   __|   | |/ /     /\     | |      |  __ \      /\                    
                                               | |__| |    /  \    | |__) | | (___   | |__| |   | |      | |      | ' /     /  \    | |      | |__) |    /  \                   
                                               |  __  |   / /\ \   |  _  /   \___ \  |  __  |   | |      | |      |  <     / /\ \   | |      |  _  /    / /\ \                  
                                               | |  | |  / ____ \  | | \ \   ____) | | |  | |  _| |_     | |      | . \   / ____ \  | |____  | | \ \   / ____ \                 
                                               |_|  |_| /_/    \_\ |_|  \_\ |_____/  |_|  |_| |_____|    |_|      |_|\_\ /_/    \_\ |______| |_|  \_\ /_/    \_\                
                                                                                                                    
                                                                                                                    
 


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


void solve(int tc)
{

    // logic goes here 
    
    int l,r;
    cin>>l>>r;
    int count=1;

    while(l<=r){
        l+=count;
        count++;
    }
    cout<<count-1<<endl;
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