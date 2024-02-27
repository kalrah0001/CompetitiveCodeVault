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
    vInt array;
    int sum=0;
    int ones=0;
    int twos=0;
    for (int i=0;i<length;i++)
    {
        int k;
        cin>>k;
        array.pb(k);
        sum+=k;
        if (k==1)
        {
            ones+=1;
        }
        if (k==2)
        {
            twos+=1;

        }

    }
    if (sum%3==0)
    {
        cout<<0<<endl;
    }
    else if (sum%3==2)
    {
        cout<<1<<endl;
    }
    else if (sum%3==1 && ones>=1)
    {
        cout<<1<<endl;
    }
    else if (sum%3==1 && array.size()==1)
    {
        cout<<1<<endl;
    }
    else if (sum%3==1)
    {
        int flag=0;
        for (int i=0;i<length;i++)
        {
            if ((sum-array[i])%3==0)
            {
                flag=1;
                cout<<1<<endl;
                break;
            }
        }
        if (flag!=1)
        {
            cout<<2<<endl;    
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