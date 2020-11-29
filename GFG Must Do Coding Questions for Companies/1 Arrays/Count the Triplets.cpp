#include<bits/stdc++.h>
using namespace std;

int countTriplets(int arr[], int n){
   // Maximum element in the array
    int me = -1;
    for(int i = 0; i<n; i++)
        if(arr[i]>me)
            me = arr[i];
    
   // Preprocessing 
    int f[me+1] = {0};
    for(int i = 0; i<n; i++)
        f[arr[i]]++;
    
   // C 0 :
    int ans = (f[0]*(f[0]-1)*(f[0]-2)/6);
    
    for(int i = 1; i<=me; i++){
        
       // C 1:
        ans += (f[0]*(f[i]*(f[i]-1)/2));
        
       // C 2:
        ans += (f[2*i]*(f[i]*(f[i]-1)/2));
        
       // C 3:
        for(int j = i+1; i+j<=me; j++){
           ans += (f[i]*f[j]*f[i+j]);
        }
    }
    
    return ans;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++)
		cin>>arr[i];
	cout<<countTriplets(arr, n);
	return 0;
}