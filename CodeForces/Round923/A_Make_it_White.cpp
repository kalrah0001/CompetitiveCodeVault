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
    int length;
    cin>>length;
    string str;
    cin>>str;

    int initialPosition=0;
    int finalPosition=str.length()-1;
    for (int i=0;i<=str.length()-1;i++)
    {
        if (str[i]=='B')
        {
            initialPosition=i;
            break;    
        }

    }   
    for (int i=str.length()-1;i>=0;i--) 
    {
        if (str[i]=='B')
        {
            finalPosition=i;
            break;
        }
    }
    int result=finalPosition-initialPosition+1;
    cout<<result<<endl;

}
int32_t main()
{
    fastInit();
    int testcases=1;
    cin>>testcases;
    for (int tt=1;tt<=testcases;tt++)
    {
        solve(tt);
    }
    return 0;
}