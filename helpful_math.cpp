#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    
    cin.tie(0);
    
    cout.tie(0);
    
    string s;
    
    cin >> s;
    
    int num[s.length()];
    
    for (int i = 0; i < s.length(); i+=2) {
        
        if( s[i] != '+' ){
            num[i] = s[i] - '0';
        }else{
            num[i] = 0;
        }
        
    }
    
    sort(num, num+(sizeof(num)/sizeof(num[0])));
    
    for (int i = 0; i < s.length(); i++) {
        
        if ( num[i] != 0 )
        {
            cout << num[i];
            if( i+1 != s.length() )
                cout <<  "+";
        }
    }
    
}
