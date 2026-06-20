#include <iostream>
#include <stack>
using namespace std;

stack<int> s1, s2;

void pushQueue(int x)
{
    s1.push(x);
}

int popQueue()
{

    if (s2.empty())
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }

    int val = s2.top();
    s2.pop();

    return val;
}

int peekQueue()
{

    if (s2.empty())
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }

    return s2.top();
}

bool isEmpty()
{
    return s1.empty() && s2.empty();
}

int main()
{
    pushQueue(1);
    pushQueue(2);
    pushQueue(3);

    cout << peekQueue() << endl;
    cout << popQueue() << endl;
    cout << peekQueue() << endl;

    return 0;
}