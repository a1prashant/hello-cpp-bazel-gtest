#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(const vector<int>& nums, int target) {
        const set<int> distincts(nums.cbegin(), nums.cend());
    }
};

int main() {
    Solution solution;
    const auto result = solution.fourSum({1,0,-1,0,-2,2}, 0);
}