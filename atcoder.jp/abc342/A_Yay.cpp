#include <bits/stdc++.h>
using namespace std;

// tYPEDEFs

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


void solve()
{

    string str;
    cin>>str;
    
    int result;
    if (str[0]==str[str.length()-1])
    {
        for (int i=1;i<str.length()-1;i++)
        {
            if (str[i]!=str[0])
            {
                cout<<i+1;
                break;
            }
        }
    }
    else {
        if (str[0]==str[1])
        {
            cout<<str.length();
        }
        else 
        {
            cout<<1;
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
    // cin>>testcases;
    for (int tt=1;tt<=testcases;tt++)
    {

        solve();

    }
    return 0;
}