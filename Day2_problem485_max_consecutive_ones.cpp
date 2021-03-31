class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        
        for(auto &x : nums) {
            if(x == 0) {
                if(count > maxCount)
                    maxCount = count;
                count = 0;
                continue;
            }
            
            count++;
        }
        
        if(count > maxCount)
            maxCount = count;
        
        return maxCount;
    }
};
