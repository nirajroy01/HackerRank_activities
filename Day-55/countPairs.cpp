#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] < target) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    int n, target;
    vector<int> nums;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << "Enter target value: ";
    cin >> target;

    Solution sol;
    int result = sol.countPairs(nums, target);

    cout << "Number of pairs with sum less than target: " << result << endl;

    return 0;
}