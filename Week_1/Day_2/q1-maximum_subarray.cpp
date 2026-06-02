#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int current_sum = nums[0];
    int max_sum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        current_sum = max(nums[i], current_sum + nums[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main()
{
    vector<int> nums;

    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << "Maximum Subarray Sum = " << maxSubArray(nums) << endl;

    return 0;
}
