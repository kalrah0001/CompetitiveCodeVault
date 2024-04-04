#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int length;
        int left;
        int right;
        cin>>length>>left>>right;
        int loves=0;
        int max_hap=0;
        int min_hap=0;
        
        for (int i=0;i<length;i++)
        {
            int k;
            cin>>k;
            if (k>=left && k<=right)
            {
                loves++;
            }
            else 
            {
                loves--;
                
            }
            min_hap=min(min_hap,loves);
            max_hap=max(max_hap,loves);
        
            
        }
        cout<< max_hap<<" "<<min_hap<<endl;
    }
}