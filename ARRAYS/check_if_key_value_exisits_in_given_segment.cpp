 #include <iostream>
using namespace std;



bool check(int a[] ,int x, int k , int n){
    int i;
    for(i = 0 ; i < n  ; i += k){
        
        int j;
        for(j = 0 ; j < k ; j++ ){
            if(a[i+j]==x){
                break;
            }
        }
            
        if(j==k){
            return false;
        }
            
        
    }
    if(i==n){
    return true;
    }
    
    int j;
    for(j = i-k ; j<n ; j++){
        if(a[j] == x){
            break;
        }
        if(j==n){
            return false;
        }
    }
    return true;
    
    
}

int main() {
	int n,k,x;
	cin>>n>>x>>k;
	
	int a[n];
	
	for(int i = 0 ; i < n ; i++){
	    cin>>a[i];
	}
	
	
	if(check( a , x ,k , n )){
	    cout<<"Yes";
	}else{
	    cout<<"No";
	}
	
	return 0;
}
