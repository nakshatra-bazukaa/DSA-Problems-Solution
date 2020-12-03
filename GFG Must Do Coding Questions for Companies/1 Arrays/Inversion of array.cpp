#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll merge(ll p1[], ll p2[], ll n1, ll n2, ll a[]){
    int i = 0, j = 0, k = 0, ans = 0;
    
    while(i<n1 && j<n2)
        if(p1[i] > p2[j]){
            ans += (n1-i);
            a[k++] = p2[j++];
        }else
            a[k++] = p1[i++];
    
    while(i<n1)
        a[k++] = p1[i++];
    
    while(j<n2)
        a[k++] = p2[j++];
    
    return ans;
}
ll merge_sort(ll a[], ll n){
    if(n<=1)
        return 0;

    ll n1 = n/2;
    ll n2 = n-n1;
    
    ll p1[n1], p2[n2];
    
    for(ll i = 0; i<n; i++)
        if(i<n1)
            p1[i] = a[i];
        else
            p2[i-n1] = a[i];
            
    return merge_sort(p1, n1) + merge_sort(p2, n2) + merge(p1, p2, n1, n2, a);
}
ll getInversions(ll arr[], ll n){
    return merge_sort(arr, n);
}

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0; i<n; i++)
        cin>>a[i];
    cout<<getInversions(a, n);
    return 0;
}