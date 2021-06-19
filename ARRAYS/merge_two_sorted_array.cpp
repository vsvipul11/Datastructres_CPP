class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>num(m);
        for(int i=0;i<m;i++){
            num[i]=nums1[i];
        }
        
        int i=0,j=0,z=0;
        while(i<m && j<n){
            if(num[i]<nums2[j]){
                nums1[z]=num[i];
                i++;
                z++;
            }else{
                nums1[z]=nums2[j];
                z++;
                j++;
            }
        }
        
        while(i<m){
            nums1[z]=num[i];
            z++;
            i++;
        }
        
        while(j<n){
            nums1[z]=nums2[j];
            z++;
            j++;
        }                 
    }
};
