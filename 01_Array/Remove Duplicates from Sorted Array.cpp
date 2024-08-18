class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
  if (nums.empty()) {
            return 0; // Edge case: empty array
        }

        int j = 1; // Start `j` at 1 since the first element is always unique
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }

        return j;
    }
   

        
    
};
