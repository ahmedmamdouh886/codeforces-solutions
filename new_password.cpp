#include <iostream>

using namespace std;

int main()
{
    
    int n, k, op, i, index = 0;
    
    cin >> n >> k;
    char ss[n-1];
    
    op = k;
    
    i = 97;
    
    while ( op-- )
    {
        ss[index] = char(i);
        i++;
        index++;
    }
    
    if( n-k != 0 ) {
        
        for (int d = 0; d < n-k; d++) {
            ss[index] = ss[d];
            index++;
        }
        
    }
    
    for (int c = 0; c < n; c++)
        cout << ss[c];
    
    //cout << endl;
    
}
