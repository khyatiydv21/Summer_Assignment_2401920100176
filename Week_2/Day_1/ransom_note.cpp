#include <iostream>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{

    int freq[26] = {0};

    for (char ch : magazine)
    {
        freq[ch - 'a']++;
    }

    for (char ch : ransomNote)
    {
        freq[ch - 'a']--;

        if (freq[ch - 'a'] < 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    string ransomNote, magazine;

    cin >> ransomNote >> magazine;

    if (canConstruct(ransomNote, magazine))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}