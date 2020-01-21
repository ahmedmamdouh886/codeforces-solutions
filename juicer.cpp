#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    
    cin.tie(0);
    
    cout.tie(0);
    
    int n, b, d, waste = 0, size = 0, o;
    
    cin >> n >> b >> d;
    
    for (int i = 0; i < n; i++) {
        
        cin >> o;
        
        if( o <= b )
        {
            size += o;
            
            if( size > d )
            {
                waste++;
                size = 0;
            }
            
        }
            
    }
    
    cout << waste << endl;
    
}
