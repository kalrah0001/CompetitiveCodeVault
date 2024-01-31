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
  int number;
  cin>>number;
  if (number==16|| number==17 || number==18) cout<<"ADVITIYA";
  else cout<<"WAITING FOR ADVITITYA";
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