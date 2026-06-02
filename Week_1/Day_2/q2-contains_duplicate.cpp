#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> s;

    for (int x : nums)
    {
        if (s.find(x) != s.end())
        {
            return true;
        }
        s.insert(x);
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    if (containsDuplicate(nums))
    {
        cout << "True (Duplicates exist)" << endl;
    }
    else
    {
        cout << "False (No duplicates)" << endl;
    }

    return 0;
}