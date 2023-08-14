class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> arr;
        for (int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                cout<<nums[i];
                arr.push_back(nums[i]);
            }
        }
        for (int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                cout<<nums[i];
                arr.push_back(nums[i]);
            }
        }
        for (int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 2)
            {
                cout<<nums[i];
                arr.push_back(nums[i]);
            }
        }
        nums = arr;
    }
};