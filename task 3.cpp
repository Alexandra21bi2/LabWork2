#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::sort(nums.begin(), nums.end());
    auto it = std::unique(nums.begin(), nums.end());
    nums.erase(it, nums.end());
    std::cout << nums.size();

    return 0;
}