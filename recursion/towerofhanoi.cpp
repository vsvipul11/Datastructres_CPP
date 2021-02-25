#include <bits/stdc++.h>
using namespace std;
 
 
void tower(int n, int a , int c , int b){
    
    if(n==1){
        cout<<" move "<<n<<" from "<<a <<" to "<<c<<endl;
        return;
    }
    
    tower( n-1 ,  a, b, c);
    
    cout<<" move "<<n<<" from "<<a<<" to "<<c<<endl;
    
    tower( n-1 ,  b ,  c ,  a);
        
}

int main(){
    int n = 3;
    int a =1;
    int b = 2;
    int c = 3;
     
     tower(n , a,c,b);
    
}
