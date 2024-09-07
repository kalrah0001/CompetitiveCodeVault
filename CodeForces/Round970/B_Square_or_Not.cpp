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

bool isPerfectSquare(int x){
    int sr=(int)sqrt(x);
    if ((sr*sr)==x) return true;
    return false;
}

void solve(int tc)
{

    // logic goes here 
    
    int n;
    cin>>n;
    string st;
    cin>>st;
    if (isPerfectSquare(n)){
    
        int rows=(int)sqrt(n);
        bool ans=true;
        for(int i=1;i<=rows;i++){
            for (int j=1;j<=rows;j++){
                if (i==1 || i==rows || j==1 || j==rows){
                    if (st[(i-1)*rows+j-1]!='1'){
                        ans=false;
                        break;
                    }
                }else{
                    if (st[(i-1)*rows+j-1]!='0'){
                        ans=false;
                        break;
                    }
                }
            }
        }

        if (ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }else{
        cout<<"No"<<endl;
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