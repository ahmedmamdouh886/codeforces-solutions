#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string s;
    set <char> dContainer;
    cin >> s;
    
    for( int i = 0;i < s.size();i++ )
        dContainer.insert(s[i]);
    
    if( dContainer.size()&1 )
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    
    
    return 0;
    
}
