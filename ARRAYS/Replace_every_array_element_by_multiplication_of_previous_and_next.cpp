#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int p;
	p = a[0];
	a[0] = a[0]*a[1];
	
	for(int i = 1 ; i<n-1 ; i++){
	     
	        int c  = a[i];
	        a[i] = p*a[i+1];
	        p = c;
	    
	}
	
	a[n-1] = a[n-1]*p;
	
   for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}	
	
	
	return 0;
}