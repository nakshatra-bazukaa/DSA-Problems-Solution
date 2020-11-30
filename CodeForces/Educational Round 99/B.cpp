#include<bits/stdc++.h>
using namespace std;

set<int, greater<int> > s;
void solve(){
    int x;
    cin>>x;

    float d = sqrt((8*x)+1);
    d -= 1;
    int ans = ceil(d/2);
    
    if(s.find(x) == s.end())
        cout<<ans<<endl;
    else
        cout<<ans+1<<endl;
}
int main(){
    ll n = 2, i = 3;
    while(n<1000001){
        s.insert(n);
        n += i;
        i++;
    }
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}