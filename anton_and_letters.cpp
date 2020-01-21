#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set <char> setAlpha;
    string oset;
    getline(cin, oset);
    
    for (size_t i = 0; i < oset.length(); i++){
        
        if( oset[i] >= 97 && oset[i] <= 122 )
            setAlpha.insert(oset[i]);
    
    }
    
    cout << setAlpha.size();
}
