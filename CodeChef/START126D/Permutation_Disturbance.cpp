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

    int number;
    cin>>number;
    vInt permutation;
    for (int i=1;i<=number;i++)
    {
        int k;
        cin>>k;
        permutation.pb(k);
    }
    int operations=0;
    for (int i=0;i<number;i++)
    {
        if (permutation[i]==i+1)
        {
            int temp=permutation[i];
            permutation[i]=permutation[i+1];
            permutation[i+1]=temp;
            operations++;
        }
    }
    cout<<operations<<endl;
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