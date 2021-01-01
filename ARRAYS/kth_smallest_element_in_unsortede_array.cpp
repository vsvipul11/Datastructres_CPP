#include <bits/stdc++.h>
using namespace std;


int main() {
	
	int n;   //size of array
	cin>>n;
	
	int k;   // key
	cin>> k;
	 
	int a[n];   // array
	
	for(int i = 0; i<n ; i++){
	    cin>>a[i];
	    }
	    
	sort(a , a+ n);  // Any sorting algorithm can be used such as mergesort or heapsort
	
for(int  i = 0; i<n ; i++){
    if(i == k){               // after sorting the k will denote the position of the number 
        cout<<a[i-1];
    }
}	
	    
	return 0;
}
