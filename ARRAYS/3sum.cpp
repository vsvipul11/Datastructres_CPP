class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        if(nums.size() <3){
            return {};
        }
        sort(nums.begin() , nums.end());
        

        vector<vector<int>> a;
       
        for(int i = 0 ; i <=nums.size()-3 ; i++){
            if (i > 0 and nums[i]==nums[i-1])
                continue;
            int j=i+1;
        int k = nums.size()-1;
        
            while(j<k){
                
                int current = nums[i];
                current += nums[j];
                current += nums[k];
         if(current == 0)
         {
             vector<int> v;
             v.push_back(nums[i]);
             v.push_back(nums[j]);
             v.push_back(nums[k]);
              while (j < k && nums[j] == nums[j + 1])
                    {
                        j++;
                    }
                    while (j < k && nums[k - 1] == nums[k])
                    {
                        k--;
                    }
             j++;
             k--;
             a.push_back(v);
         }
          else if(current > 0){
              k--;
          }else{
              j++;
          }
                
                
            }
                   
    }
        
    return a;
    }
};
