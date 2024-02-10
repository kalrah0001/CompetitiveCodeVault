#include <bits/stdc++.h>
using namespace std;

// typedefs

#define int long long
#define vInt vector<int>

//  Macros
#define endl '\n'
#define all(x) x.begin(),x.end()
#define pb push_back


void fastInit()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve(int tt)
{
    // your code goes here.
    int queries;
    cin>>queries;
    vInt result;
    for (int i=1;i<=queries;i++)
    {
        int type;
        cin>>type;
        if  (type==1)
        {
            int k;
            cin>>k;
            result.pb(k);
        }
        if (type==2)
        {
            int k;
            cin>>k;
            cout<<result[(result.size()-1)-(k-1)]<<endl;
            
        }
    }
    

}
int32_t main()
{
    fastInit();
    solve(1);
    return 0;
}