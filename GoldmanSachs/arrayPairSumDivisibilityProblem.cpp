class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int left = 0;
        int right = 0;
        
        unordered_map<int, int> m;
        int n = nums.size();
        
        for(auto num : nums){
            m[num % k]++;
        }
        
        for(auto num : nums){
            int rem = num % k;
            if(rem == 0){
                if(m[rem] % 2 == 1)
                    return false;
            }else if(2 * rem == k){  // why not k / 2 coz give i points so multiply
                if(m[rem] % 2 == 1)
                    return false;
            }else{
                if(m[rem] != m[k - rem])
                    return false;
            }
        }
        return true;
    }
};