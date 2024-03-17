#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    
    
    string str;
    cin>>str;
    int k=str.length()-2;
    string str1='<'+string(k,'=')+'>';
    string result=(str1==str)?"Yes":"No";
    cout<<result;
    return 0;
}