#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n);

    int left = 0;
    int right = n - 1;
    int index = n - 1;

    while (left <= right)
    {
        if (abs(nums[left]) > abs(nums[right]))
        {
            result[index] = nums[left] * nums[left];
            left++;
        }
        else
        {
            result[index] = nums[right] * nums[right];
            right--;
        }
        index--;
    }

    return result;
}

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> ans = sortedSquares(nums);

    cout << "Sorted Squares: ";
    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}