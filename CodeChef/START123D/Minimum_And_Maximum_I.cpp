#include <bits/stdc++.h>
using namespace std;

// tYPEDEFs

#define int long long
#define vInt vector<int>
#define vStr vector<string>

// FUNCTION MACROS

#define endl '\n'
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend();
#define pb push_back


void fastInit()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Flags to use: -std=c++17 -fsanitize=address -fsanitize=undefined -o <file_name_without_extension>/
//////////////////////////////////////CODE HERE//////////////////////////////////////////////////////


void solve(int tt)
{

    int length;
    cin>>length;
    int result=0;
    if (length%2==0)
    {
        length=length/2;
        result=2*(length*(length+1)/2);
        cout<<result<<endl;

    }
    else
    {
        
        length=(length+1)/2;
        result=2*(length*(length+1)/2);
        cout<<result-length<<endl;
    }

}


int32_t main()
{
    fastInit();
    #ifdef LOCAL
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int testcases=1;
    cin>>testcases;
    for (int tt=1;tt<=testcases;tt++)
    {

        solve(tt);

    }
    return 0;
}