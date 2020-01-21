#include <iostream>

using namespace std;

int main()
{
    int k, w, n, res = 0;
    
    cin >> k >> n >> w;
        
    for (int i = 1; i <= w; i++)
            res += k * i;
    
    res -= n;
    
    if( res < 0 )
        res = 0;
    
    cout << res;
    
}
