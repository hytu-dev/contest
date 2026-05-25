class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        if (nums.size() <= k) { return nums; }
        int w = k;

        for (int r = k; r < nums.size(); ++r) {
            if (nums[r] == nums[w - k]) { continue; }
            nums[w++] = nums[r];
        }

        nums.resize(w);
        return nums;
    }
};
