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
  int year;
  cin>>year;
  if (year%100==0) cout<<"K00"<<endl;
  else if (year%100<10) cout<<"K0"<<year%100<<endl;
  else cout<<"K"<<year%100<<endl;
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int testcases=1;
//   cin>>testcases;
  for (int tt=1;tt<=testcases;tt++)
  {
    solve(tt);
  }
  return 0;
}