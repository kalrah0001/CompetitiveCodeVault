#include <bits/stdc++.h>
using namespace std;
string giveBinary(int x)
{
    bitset<8> b(x);
    return b.to_string();
}
int32_t main()
{
    int num;
    cout<<"enter a number "<<endl;
    cin>>num;
    cout<<"Binary representation of the number is";
    cout<<giveBinary(num);
    return 0;
}