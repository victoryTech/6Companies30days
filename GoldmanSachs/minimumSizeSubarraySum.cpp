class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        int len = INT_MAX;
        int sum = 0;
        
        while(right < n){
            sum += nums[right++];
            
            while(sum >= target){
                len = min(len, right - left);
                sum = sum - nums[left++];
            }
        }
        
        if(len == INT_MAX)
            return 0;
        return len;
    }
};