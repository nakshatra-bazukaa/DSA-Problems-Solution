#include<bits/stdc++.h>
using namespace std;

void rearrange(int *arr, int n) { 
	int min_ind = 0, max_ind = n-1;
	
	long long D = arr[n-1] + 1;
	
	for(int i = 0; i<n; i++)
	    arr[i] += (i%2 == 0) ? (arr[max_ind--]%D)*D : (arr[min_ind++]%D)*D; 

	for(int i = 0; i<n; i++)
	    arr[i] /= D;
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