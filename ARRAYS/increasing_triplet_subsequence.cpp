#include<bits/stdc++.h>
using namespace std;

    bool increasingTriplet(vector<int>& nums) {
        int l1=INT_MAX,l2=INT_MAX;
        for(auto i:nums) {
            if(i<=l1) l1=i;
            else if(i<=l2) l2=i;
            else return true;
        }
        return false;
    }

int main(){
  
  vector<int> nums{1,4,3,5,6,7,9];
  cout<<increasingTriplet(nums);
 return 0; 
}
