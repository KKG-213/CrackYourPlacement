class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                int k = j+1;
                int l = n-1;
                while(k<l){
                    long long sum = nums[i];
                    sum+= nums[j];
                    sum+= nums[k];
                    sum+= nums[l];
                    if(sum==target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                  
                }
            }
        }
        return ans;
    }
};
// sort the array 
// convert to 2 pointer
// take pointers as i,j,k,l
// except l every pointer will be consecutive intially 
/* i=0, j=i+1, k=j+1
l=n-1
so fix j and i and 
make it two pointer by changing k and l 
tc-> O(n^3)
sc-> O(no. of quadruplets), This space is only used to store the answer. 
We are not using any extra space to solve this problem. 
So, from that perspective, space complexity can be written as O(1).
*/
