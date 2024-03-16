#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    string str;
    cin>>str;
    int leftArrow=0;
    int rightArrow=0;
    int equals=0;
    for(long unsigned int i=0;i<str.length();i++)
    {
        if (str[i]=='<') leftArrow++;
        else if (str[i]=='=') equals++;
        else rightArrow++;

    }
    if (leftArrow==1 && rightArrow==1 && equals>=0 && str[0]=='<' && str[str.length()-1]=='>') cout<<"Yes";
    else cout<<"No";
    return 0;
}