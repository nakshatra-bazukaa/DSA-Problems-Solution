#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n){
    vector<int> ans;
    int max = arr[n-1];
    ans.push_back(max);
    for(int i = n-2; i>=0; i--)
        if(arr[i] >= max){
            ans.push_back(arr[i]);
            max = arr[i];
        }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];
    vector<int> ans = leaders(a, n);
    for(auto i : ans)
        cout<<i<<' ';
    return 0;
}