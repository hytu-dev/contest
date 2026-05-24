class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int z = find(nums.begin(), nums.end(), 0) - nums.begin();

        bool is_fwd = ranges::all_of(views::iota(0, n), [&](int i) {
            return nums[(z + i) % n] == i;
        });

        bool is_bwd = ranges::all_of(views::iota(0, n), [&](int i) {
            return nums[(z - i + n) % n] == i;
        });

        if (is_fwd) { return min(n - z + 2, z); }
        if (is_bwd) { return min(n - z, z + 2); }
        return -1;
    }
};
