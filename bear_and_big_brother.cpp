#include <iostream>

using namespace std;

// https://codeforces.com/contest/791/problem/A

int main()
{
    
    unsigned short int a, b, years = 0;
    
    cin >> a >> b;
    
    while( b >= a )
    {
        a *= 3;
        b *= 2;
        years++;
    }
    
    cout << years;
    
    return 0;
    
}
