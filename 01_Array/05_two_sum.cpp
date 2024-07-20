class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ht;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (ht.count(complement)){
                ans.push_back(i);
                ans.push_back(ht[complement]);
                return ans;
            }

            ht[nums[i]] = i;
        }

        return ans; //no result found
    }
};
