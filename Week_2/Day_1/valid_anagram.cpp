#include <iostream>
using namespace std;
#include <unordered_map>
bool isanagram(string s, string t);
int main()
{
    string s1 = "banana";
    string s2 = "nabnsa";
    cout << isanagram(s1, s2);
    return 0;
}

bool isanagram(string s, string t)
{
    if (s.size() != t.size())
        return false;
    unordered_map<char, int> freq1;
    unordered_map<char, int> freq2;
    for (char x : s)
    {
        freq1[x]++;
    }
    for (char x : t)
    {
        freq2[x]++;
    }
    if (freq1 == freq2)
        return true;
    else
        return 0;
}