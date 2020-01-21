#include <iostream>
#include <string>

// https://codeforces.com/contest/281/problem/A
// A. Word capitalization.

using namespace std;

int main()
{
    string s;
    
    cin >> s;
    
    if( islower( s[0] ) )
        s[0] -= 32;
    
    cout << s;
    
    return 0;
}
