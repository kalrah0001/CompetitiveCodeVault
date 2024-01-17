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
  int health,x,y1,y2,k;
  cin>>health>>x>>y1>>y2>>k;
  int first_weapon=0;
  int second_weapon=0;
  while (health>0)
  {
    first_weapon++;
    health-=x;
  }
  while (health>0)
  {
    second_weapon++;
    if (k>0) health-=y1;
    else health-=y2;
    k--;
  }
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