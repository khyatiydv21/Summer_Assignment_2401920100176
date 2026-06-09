#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findAnagrams(string s, string p)
{

    vector<int> ans;

    if (p.size() > s.size())
        return ans;

    vector<int> freqP(26, 0), freqS(26, 0);

    int k = p.size();

    for (char c : p)
    {
        freqP[c - 'a']++;
    }

    int left = 0;

    for (int right = 0; right < s.size(); right++)
    {

        freqS[s[right] - 'a']++;

        if (right - left + 1 > k)
        {
            freqS[s[left] - 'a']--;
            left++;
        }

        if (right - left + 1 == k && freqS == freqP)
        {
            ans.push_back(left);
        }
    }

    return ans;
}

int main()
{

    string s, p;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string p: ";
    cin >> p;

    vector<int> result = findAnagrams(s, p);

    cout << "Starting indices: ";

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}