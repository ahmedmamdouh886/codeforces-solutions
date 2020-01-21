#include <iostream>

using namespace std;

int main()
{
    string s, res = "NO";
    char c;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        
        c = s[i];
        if( c == 'H' || c == 'Q' || c == '9' ){
            
            res = "YES";
            break;
            
        }
        
    }
    
    cout << res;
    
}
