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
  int temp=health;
  int first_weapon=0;
  int second_weapon=0;
  while (health>0)
  {
    first_weapon++;
    health-=x;
  }
  while (temp>0)
  {
    second_weapon++;
    if (k>0) temp-=y1;
    else temp-=y2;
    k--;
  }
  if (first_weapon>second_weapon) cout<<second_weapon<<endl;
  else cout<<first_weapon<<endl;
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