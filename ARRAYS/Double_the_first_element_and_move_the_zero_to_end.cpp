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
	int k =0;
	for(int i=0;i<n;i++)
	{
	    if(i<n-1){
	    if((a[i]!=0)&&(a[i+1]!=0))
	    {
	        a[i]*=2;
	        a[i+1]=0;
	    }}
	    if(a[i]!=0)
	    {
	        swap(a[i],a[k++]);
	    }
	    
	    
	}
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	
	return 0;
}