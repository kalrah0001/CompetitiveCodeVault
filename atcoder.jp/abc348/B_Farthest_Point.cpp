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

double dpoint(int x1,int y1,int x2,int y2)
{
    double distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return distance;
}

void solve(int tt)
{
    int number;
    cin>>number;
    vector<pair<int,int>>coordinates;
    for (int i=0;i<number;i++)
    {
        pair<int,int>point;
        int x;
        cin>>x;
        point.F=x;
        int y;
        cin>>y;
        point.S=y;
        coordinates.pb(point);
    }

    double distance1=0;
    int id=0;
    for (int i=1;i<=number;i++)
    {
        for (int j=1;j<=number;j++)
        {
            if (i==j)
            {
                continue;
            }
            else
            {
                if (dpoint(coordinates[i-1].F,coordinates[i-1].S,coordinates[j-1].F,coordinates[j-1].S)>distance1)
                {
                    distance1=dpoint(coordinates[i-1].F,coordinates[i-1].S,coordinates[j-1].F,coordinates[j-1].S);
                    id=j;
                }
                else if (dpoint(coordinates[i-1].F,coordinates[i-1].S,coordinates[j-1].F,coordinates[j-1].S)==distance1)
                {
                    if (j<id)
                    {
                        id=j;
                    }
                }
                
            }
            
        }
        cout<<id<<endl;
        id=0;
        distance1=0;
    }
}

int32_t main()
{
    fastIO();
    // cin>>testcases;
    #ifdef LOCAL
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
 
    
        solve(1);
    return 0;
}