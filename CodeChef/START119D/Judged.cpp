#include <bits/stdc++.h>
using namespace std;

// macros 
#define endl '\n'
#define pb push_back

// function macros

#define all(x) x.begin(),x.end()

void solve(int tt)
{
  // your code goes here
  int result=0;
    for (int i=0;i<5;i++)
    {
        int result1;
        cin>>result1;
        if (result1==1) result++;
    }
    if (result>=4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases=1;
  cin>>testcases;
  for (int tt=1;tt<=testcases;tt++)
  {
    solve(tt);
  }
  return 0;
}