#include <iostream>

using namespace std;

int main()
{
    string s, res;
    bool space = false;
    short int length, i = 0;
    
    cin >> s;
    
    length = s.length();
    
    while ( i < length )
    {
        
        if( s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' ){
            
            if( space == true ){
                res += " ";
                space = !space;
            }
            
            i+=3;
            continue;
        }
        
        res  += s[i];
        space = true;
        i++;
        
    }
    
    cout << res;
    
}
