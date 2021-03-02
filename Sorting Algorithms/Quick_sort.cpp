#include <iostream>
using namespace std;


void swap(int a[] , int i , int j ){
    int  temp = a[i];
    a[i] = a[j];
    a[j]  = temp; 
    
}

int partition(int a[] , int l , int  r){
   int pivot = a[r];
    
    int i =l-1;
    
  for(int j = l ; j < r ; j++){
      
      if(a[j] < pivot){
          i++;
          swap(a,i,j);
      }
      
  }  
    swap( a , i+1 , r);
    return i+1;
    
    
}

void quicksort(int a[] , int l , int r){
    
    if(l<r){
        
        int p = partition(a , l , r);
        
        quicksort(a , l , p-1);
        quicksort(a, p +1 , r);
        
    }
    
}

int main(){
    
int a[] = {4,6,1,2,3,9,5};    
int l = 0;
int r = 6;
int n = r+1;

quicksort(a , l , r);

for(int i = 0 ; i< n ; i++){
    cout<<a[i];
}    
    return 0;
}
