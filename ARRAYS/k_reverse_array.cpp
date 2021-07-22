#include <bits/stdc++.h>
using namespace std;





int* kreverse(int* a , int n , int k){
    
    int i;
    
    for(i = 0 ; i<n ; i+=k){
        
        int s = i;
        int e = min((i+k-1),n-1);
        while(s<e){
           int temp;
            temp = a[s];
            a[s] = a[e];
            a[e] = temp;
            s++;
            e--;
        }
        
    }
    
   
        return a;
    
}

int main(){
    
    int n,k;
    cin>>n>>k;
    int a[n];
    
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    
    kreverse(a, n, k);
    
    
    for(int i = 0 ; i < n ; i++){
    cout<<a[i]<<" ";
    }
    return 0;
}
