 #include<bits/stdc++.h>
    using namespace std;



void prime(int a , int b){

    for(int i = a ; i<=b ; i++){
        if(i==1){
            continue;
        }
        
        if(i==2 || i ==3 || i == 5 || i==7){
            cout<<i<<" ";
            continue;
        }
        if(i%2==0 || i%3==0 ||i%5==0 || i%7== 0){
            continue;
        }else{
            cout<<i<<" ";
        }
    }
    
    
    
}

int main(){
  int a = 1;
  int b = 100;
  
  prime(1 , 100);
    
    return 0;
}
