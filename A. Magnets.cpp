#include <iostream>
using namespace std;

// http://codeforces.com/problemset/problem/344/A

int main()
{
    int n, i;
    cin >> n;
    int m[n];
    int g = 1;

    for( i = 0; i < n; ++i )
    {
        cin >> m[i];
        if( i > 0 && m[i] != m[i - 1] ) g++;
    }

    cout << g << endl;
    return 0;
}
