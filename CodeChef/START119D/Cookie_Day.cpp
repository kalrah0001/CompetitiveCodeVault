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
  int children;
  cin>>number;
  cin>>children;
    vector<int>cookies;
  for (int i=0;i<number;i++)
  {
    int a;
    cin>>a;
    cookies.pb(a);

  }
  int result=0;
  for (int i=0;i<number;i++)
  {
    if (cookies[i]>=children){
        result=1;
        break;
    }
  }
  if (result==0)
  {
    cout<<-1<<endl;
  }
  else 
  {
    vector<int>results;
    for (int i=0;i<cookies.size();i++)
    {
        if (cookies[i]<children) continue;
        else 
        {

            int value=cookies[i]-children*(cookies[i]/children);
            results.pb(value);
        }
    }
    sort(all(results));
    cout<<results[0]<<endl;
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