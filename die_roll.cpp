#include <iostream>

using namespace std;

int main()
{

    int y, w, event, gcd;

    cin >> y >> w;
    
    event = (6 - max(y, w)) + 1;
    // GCD
    for (int i = 1; i <= event && i <= 6; i++)
    {
        if (event % i == 0 && 6 % i == 0)
        {
            gcd = i;
        }
    }

    cout << event/gcd << "/" << 6/gcd;
}
