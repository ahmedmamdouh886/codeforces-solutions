#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string hello;

    int pos = 0;
    while (pos < s.length() && s[pos] != 'h')
    {  
        pos++;
    }
    hello += s[pos];
    pos++;
    while (pos < s.length() && s[pos] != 'e')
    {    
        pos++;
    }
    hello += s[pos];
    pos++;
    
    while (pos < s.length() && s[pos] != 'l')
    {
        pos++;
    }
    
    hello += s[pos];
    pos++;
    while (pos < s.length() && s[pos] != 'l')
    {
        pos++;
    }
    hello += s[pos];
    pos++;
    while (pos < s.length() && s[pos] != 'o')
    {
        pos++;
    }

    hello += s[pos];
    
    if (hello == "hello")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    return 0;
}
