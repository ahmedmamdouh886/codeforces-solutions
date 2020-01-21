#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
   long long n, x, packs, distressed = 0;
   char op;
    
   cin >> n >> x;
    
   while( n-- )
   {
        cin >> op >> packs;
        
        if( op == '+' )
        {
            x += packs;
        }
        else
        {
            if( x >= packs )
                x -= packs;
            else
                distressed++;
        }
        
    }
    
    cout << x << " " << distressed;
    
}
