#include<bits/stdc++.h>
using namespace std;

int countTriplets(int arr[], int n){
  // Maximum element in the array
  int me = -1;
  for(int i = 0; i<n; i++)
      if(arr[i]>me)
          me = arr[i];

  // Exists array
  bool exists[me+1];
  memset(exists, false, sizeof(exists));

  // Loop to mark all existing elements 
  for (int i=0; i < n; i++)
      exists[arr[i]] = true; 
      
  int count = 0; 
    
  // Loop to count for triplets 
  for(int i = 0;i < n; i++) 
      for(int j = i+1; j < n; j++)
          if(arr[i] + arr[j] <= me && exists[arr[i] + arr[j]]) 
              count++; 

  return count; 
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