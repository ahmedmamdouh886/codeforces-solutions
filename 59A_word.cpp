#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// https://codeforces.com/contest/59/problem/A
// A.Word

int main()
{
    string s;
    unsigned short int UpperCase = 0, LowerCase = 0;
    
    cin >> s;
    
    for(unsigned short int i = 0;i < s.size();i++)
    {
        if( s[i] <= 90 )
            UpperCase++;
        else if( s[i] >= 97 )
            LowerCase++;
    }
    
    if( UpperCase > LowerCase )
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    cout << s;
    
    return 0;
    
}
