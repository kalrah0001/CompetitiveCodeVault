#include <bits/stdc++.h>
using namespace std;
void solve(){
    int rows;
    cin>>rows;
    vector<string> notes;
    for (int i=0;i<rows;i++){
        string s;
        cin>>s;
        notes.push_back(s);
    }
    for (int i=rows-1;i>=0;i--){
        for (int j=0;j<4;j++){
            if (notes[i][j]=='#') cout<<j+1<<" ";
        }
        
    }
    cout<<endl;

}
int32_t main(){
    int testcases;
    cin>>testcases;
    for (int tc=1;tc<=testcases;tc++){
        solve();
    }
}