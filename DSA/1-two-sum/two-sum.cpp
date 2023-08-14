class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i =0;i<nums.size();i++)
        {
            // cout<<"I---"<<nums[i]<<endl;
            for(int j = i+1; j<nums.size(); j++)
            {
                // cout<<"J---"<<nums[j]<<endl;
                if(nums[i]+nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};