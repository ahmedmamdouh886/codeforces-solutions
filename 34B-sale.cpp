#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, prices[100], sum = 0;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    sort(prices, prices+n);

    for (int i = 0; i < m; i++)
    {
        if (prices[i] < 0)
        {
            sum += abs(prices[i]);
        }
    }

    cout << sum << endl;

    return 0;
}
