#include <iostream>

using namespace std;

int main()
{
    string a, b;
    int res = 0;
    
    cin >> a >> b;
    
    for(int i = 0;i<a.length();i++)
    {

        if(  tolower(b[i]) < tolower(a[i]) ){
            res = 1;
            break;
        }
        else if( tolower(a[i]) < tolower(b[i]) ){
            res = -1;
            break;
        }
        
    }
    
    cout << res;
    
    return 0;
    
}
