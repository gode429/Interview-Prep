https://leetcode.com/problems/single-number/description/

https://drive.google.com/open?id=1iKFLQQVLbx8eDYWZVVpAR8DmRqi8T-Pq 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans=0;
                
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        
        return ans;
        
    }
};
