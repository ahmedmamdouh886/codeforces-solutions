#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, d, x = 0, shootings = 0;
    vector<pair<int,int> >durabilities;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        durabilities.push_back(make_pair(d, i));
    }
    
    sort(durabilities.begin(), durabilities.end());
    
    for (int i = n-1; i >= 0; i--)
    {
        shootings += ((durabilities[i].first * x) + 1);
        x++;
    }

    cout << shootings << endl;
    for (int i = n-1; i >= 0; i--)
    {
        cout << ++durabilities[i].second << " ";
    }

    cout << endl;

    return 0;
}
