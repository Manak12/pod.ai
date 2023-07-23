#include <iostream>
#include <vector>

using namespace std;

vector<int> slidingWindow(const vector<int>& nums, int k) {
    vector<int> result;
    int n = nums.size();
    
    // Handle edge cases
    if (n == 0 || k <= 0 || k > n) {
        return result;
    }
    
    // Compute the first window sum
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    result.push_back(sum);
    
    // Slide the window and compute sums
    for (int i = k; i < n; i++) {
        sum += nums[i] - nums[i - k];
        result.push_back(sum);
    }
    
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 3;
    
    vector<int> result = slidingWindow(nums, k);
    
    // Output the sliding window sums
    for (int i : result) {
        cout << i << " ";
    }
    
    return 0;
}
