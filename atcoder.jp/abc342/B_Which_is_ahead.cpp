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
    vector<pair<int,int>>persons;
    for (int i=0;i<number;i++)
    {
        int k;
        cin>>k;
        pair<int,int>p1;
        p1.first=k;
        p1.second=i;
        persons.pb(p1);
    }
    int queries;
    cin>>queries;
    for (int i=0;i<queries;i++)
    {
        int p1,p2;
        cin>>p1>>p2;
        int index1,index2;
        for (int i=0;i<persons.size();i++)
        {
            if (persons[i].first==p1)
            {
                index1=i;
            }
            if (persons[i].first==p2)
            {
                index2=i;
            }
        }
        if (index1<index2) 
        {
            cout<<p1<<endl;
        }
        else
        {
            cout<<p2<<endl;
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

        solve(tt);

    }
    return 0;
}