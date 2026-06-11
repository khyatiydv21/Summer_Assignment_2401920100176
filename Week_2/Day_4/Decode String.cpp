#include <iostream>
#include <stack>
#include <string>

using namespace std;

string decodeString(string s)
{
    stack<int> countStack;
    stack<string> stringStack;

    string current = "";
    int num = 0;

    for (char ch : s)
    {

        if (isdigit(ch))
        {
            num = num * 10 + (ch - '0');
        }

        else if (ch == '[')
        {
            countStack.push(num);
            stringStack.push(current);

            num = 0;
            current = "";
        }

        else if (ch == ']')
        {
            int repeat = countStack.top();
            countStack.pop();

            string temp = current;

            current = stringStack.top();
            stringStack.pop();

            while (repeat--)
            {
                current += temp;
            }
        }

        else
        {
            current += ch;
        }
    }

    return current;
}

int main()
{
    string s = "3[a2[c]]";

    cout << decodeString(s) << endl;

    return 0;
}