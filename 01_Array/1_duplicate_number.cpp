/* 26. Remove Duplicates from Sorted Array */
#include<iostream>
#include <iostream>
#include <vector>

using namespace std;

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

int main() {
    Solution solution;
    vector<int> nums;
    int n;

    // Take array input from the user
    cout << "Enter the number of elements: ";
    cin >> n;

    nums.resize(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Remove duplicates
    int length = solution.removeDuplicates(nums);

    // Print the results
    cout << "Length of array with unique elements: " << length << endl;
    cout << "Array with unique elements: ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
