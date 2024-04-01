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

    int alice,bob;
    cin>>alice>>bob;
    if (alice-bob>=10)
    {
        cout<<0<<endl;
    }
    else if (alice>bob)
    {
        int diff=alice-bob;
        int target=10-diff;
        if (target%3==0)
        {
            cout<<target/3<<endl;
        }
        else 
        {
            cout<<target/3+1<<endl;
        }
    }
    else
    {
        int target=bob+10-alice;
        if (target%3==0)
        {
            cout<<target/3<<endl;
        }
        else 
        {
            cout<<(target/3)+1<<endl;
        }
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