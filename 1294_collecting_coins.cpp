#include <iostream>
#include <string>

using namespace std;

int maximum( int a, int b, int c )
{
   int max = ( a < b ) ? b : a;
   return ( ( max < c ) ? c : max );
}


int main() 
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b, c, n, d, max;

    cin >> t;
    string res[t];

    for (int i = 0; i < t; ++i)
    {
        cin >> a >> b >> c >> n;
        max = maximum(a, b, c);
        d = abs(max - a) + abs(max - b) + abs(max - c);

        if(d > n) {
            res[i] = "NO";
            continue;
        }

        n -= d;

        res[i] = ( (n % 3) ? "NO" : "YES" );
    }

    for (int j = 0; j < t; ++j)
    {
       cout << res[j] << endl;
    }

    return 0;
}
