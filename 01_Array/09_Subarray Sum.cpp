class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sum;
        sum[0] = 1;

        int res = 0, cumSum = 0;

        for(int i=0;i<nums.size();i++){
            cumSum += nums[i];
            if(sum.find(cumSum - k) != sum.end()) res += sum[cumSum - k];
            sum[cumSum]++;
        }

        return res;
    }
};
