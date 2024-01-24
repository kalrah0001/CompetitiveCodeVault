#include <bits/stdc++.h>
using namespace std;
void  solve()
{
    int number,minimum;
    cin>>number>>minimum;
    vector<int>detail;
    for (int i=0;i<number;i++)
    {
        int literate;
        cin>>literate;
        detail.push_back(literate);
    }
    int count=0;
    int countSum=0;

    for (int i=0;i<detail.size();i++)
    {
        countSum+=detail[i];
        if (countSum>=minimum)
        {
            count++;
            countSum=0;
        }
    }
    cout<<count<<endl;
}
int32_t  main()
{
    int testcases;
    cin>>testcases;
    for (int tt=1;tt<=testcases;tt++)
    {
        solve();
    }
}