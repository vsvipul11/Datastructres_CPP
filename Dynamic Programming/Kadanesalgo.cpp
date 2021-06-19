class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(); // size array
        int sum = 0; // sum curent of array
        int max_sum = nums[0]; // MAX subarray in array
        for(int i =0;i<n;i++)
        {
            if(sum < 0)
            {
                sum = 0;
            }
            sum +=nums[i];
            //sum = max(sum,0);
            max_sum = max(sum,max_sum);            
        }
        return max_sum;
    }
};
