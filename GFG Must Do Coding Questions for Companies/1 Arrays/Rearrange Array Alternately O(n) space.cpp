#include<bits/stdc++.h>
using namespace std;

void rearrange(int *arr, int n) { 
	int min_ind = 0, max_ind = n-1;
	
	int out[n];
	
	for(int i = 0; i<n; i++)
	    out[i] = (i%2 == 0) ? arr[max_ind--] : arr[min_ind++];
	
	for(int i = 0; i<n; i++)
	    arr[i] = out[i];
}
int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i = 0; i<n; i++)
		cin>>arr[i];
	rearrange(arr, n);
	return 0;
}