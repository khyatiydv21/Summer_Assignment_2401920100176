#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s)
{

    unordered_map<char, int> lastIndex;

    int left = 0;
    int ans = 0;

    for (int right = 0; right < s.size(); right++)
    {

        char c = s[right];

        if (lastIndex.count(c) && lastIndex[c] >= left)
        {
            left = lastIndex[c] + 1;
        }

        lastIndex[c] = right;

        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main()
{

    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Longest substring length = "
         << lengthOfLongestSubstring(s)
         << endl;

    return 0;
}