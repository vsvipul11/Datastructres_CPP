#include<bits/stdc++.h>

using namespace std;

void swap(int* a ,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0 ; i< n ; i++){
        cin>>arr[i];
    }
    
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid <= high ){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
            continue;
        }else if(arr[mid] == 1){
            mid++;
            continue;
        }else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
            
            continue;
        }
    }
    
    for(int i = 0 ; i<n ; i++)
    cout<<arr[i]<<" ";
    
    return 0;
}
