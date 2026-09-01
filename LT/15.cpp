class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
                set<vector<int>> non_use;
                for (int i = 0; i < nums.size(); i++) {
                    set<int> hashset;
                    for (int j = i + 1; j < nums.size(); j++) {
                        int third = -(nums[i] + nums[j]);
                        if (hashset.find(third) != hashset.end()) {
                            vector<int> temp = {nums[i], nums[j], third};
                            sort(temp.begin(), temp.end());
                            non_use.insert(temp);
                        }
                        hashset.insert(nums[j]);
                    }
                }
                vector<vector<int>> ans(non_use.begin(), non_use.end());
                return ans;
    }
};