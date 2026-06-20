#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int ping(int t)
{

    q.push(t);

    while (!q.empty() && q.front() < t - 3000)
    {
        q.pop();
    }

    return q.size();
}

int main()
{

    cout << ping(1) << endl;
    cout << ping(100) << endl;
    cout << ping(3001) << endl;
    cout << ping(3002) << endl;

    return 0;
}