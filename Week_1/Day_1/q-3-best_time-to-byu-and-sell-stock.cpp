#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{

    int maxprofit = 0;
    int minPrice = prices[0];
    for (int j = 1; j < prices.size(); j++)
    {
        if (prices[j] < minPrice)
            minPrice = prices[j];
        if (prices[j] > minPrice)
        {
            maxprofit = max(maxprofit, prices[j] - minPrice);
        }
    }
    return maxprofit;
}

int main()
{
    vector<int> prices = { 7, 1, 5, 3, 6, 4};

    int profit = maxProfit(prices);
    cout<<profit;
}
