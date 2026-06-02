#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int> &nums, int k)
{
    int n = nums.size();

    int window_sum = 0;

    for (int i = 0; i < k; i++)
    {
        window_sum += nums[i];
    }

    int max_sum = window_sum;
    for (int i = k; i < n; i++)
    {
        window_sum += nums[i] - nums[i - k];
        max_sum = max(max_sum, window_sum);
    }

    return (double)max_sum / k;
}

int main()
{
    int n, k;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    double result = findMaxAverage(nums, k);

    cout << "Maximum Average Subarray = " << result << endl;

    return 0;
}