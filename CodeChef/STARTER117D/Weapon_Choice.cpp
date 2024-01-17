#include <bits/stdc++.h>
using namespace std;
int solve(int tt)
{
    int health,x,y1,y2,k,a,b,c;
    cin>>health>>x>>y1>>y2>>k;
    if (health%x==0) a=health/x;
    else a=health/x + 1;
    c=health-k*y1;
    if (c<=0)
    {
        if (health%y1==0) b=health/y1;
        else b=health/y1+1;

    } 
    else 
    {
        if (c%y2==0)
        {
            b=k+c/y2;

        }
        else 
        {
            b=k+c/y2 +1 ;
        }
    }
    if (a>b) return b;
    else return a;
}
int32_t main()
{
    int testcases;
    cin>>testcases;
    for (int tt=1;tt<=testcases;tt++)
    {
        cout<<solve(tt)<<endl;
    }
    return 0;
}