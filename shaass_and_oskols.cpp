#include <iostream>

using namespace std;

int main()
{
    unsigned short int n, s, x, y;
    cin >> n;
    unsigned short int b[n-1];
    
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    cin >> s;
    
    while (s--)
    {
        
        cin >> x >> y;
        x--;
        
        if( x != 0 && x != n-1 )
        {
            b[x-1] += (y - 1); // left birds.
            b[x+1] += (b[x] - y); // right birds.
        }
        else
        {
            
            if( x == n-1 )
            {
                b[x-1] += (y - 1);
            }else if( x == 0 )
            {
                b[x+1] += (b[x] - y);
            }
            
        }
        
        b[x]   = 0;
        
    }
    
    for (int i = 0; i < n; i++) {
        cout << b[i] << endl;
    }

}
