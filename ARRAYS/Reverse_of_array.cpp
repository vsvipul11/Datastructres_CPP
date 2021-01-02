#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[n];
	
	for(int  i = 0 ; i<n ; i++){
	    cin>>a[i];
	    }
	   int end = n/2;
	   
	 for(int i = 0; i<end; i++){
	     int temp;
	     temp = a[i];
	     a[i] = a[n-1-i];
	     a[n-1-i] = temp;
	 }
	 
	 for(int  i = 0 ; i<n ; i++){
	    cout<<a[i];
	    }
	    
	return 0;
}
