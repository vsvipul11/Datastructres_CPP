#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	int ind[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    cin>>ind[i];
	}
	//int k =0;
	for(int i=0;i<n;i++)
	{
	    ind[i]=a[ind[i]];
	}
	for(int i=0;i<n;i++)
	 a[i]=ind[i];
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	
	return 0;
}