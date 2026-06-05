#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
    string cleaned = "";

    for (char ch : s)
    {
        if (isalnum(ch))
        {
            cleaned += tolower(ch);
        }
    }

    int left = 0;
    int right = cleaned.length() - 1;

    while (left < right)
    {
        if (cleaned[left] != cleaned[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}