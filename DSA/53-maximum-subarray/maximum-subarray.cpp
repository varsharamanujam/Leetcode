class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int max_arr = 0;

        for (int i = 0; i<nums.size(); i++)
        {
            max_arr = max_arr+nums[i];
            
            if(max < max_arr)
            {
                max = max_arr;
            }
            if(max_arr < 0)
            {
                max_arr = 0;
            }
        }
        return max;
    }
};