#include <iostream>
#include <cmath>

// https://codeforces.com/contest/263/problem/A

using namespace std;

int main()
{
    unsigned short int beautifulRow = 3, beautifulColumn = 3, columns[5], currentRowIndex = 0, currentColumnIndex = 0;
    
    for( unsigned short int r = 1; r <= 5;r++ )
    {
        
        cin >> columns[1] >> columns[2] >> columns[3] >> columns[4] >> columns[5];
        if( columns[1] == 1 )
        {
            currentColumnIndex = 1;
            currentRowIndex    = r;
            
        }else if( columns[2] == 1 )
        {
            currentColumnIndex = 2;
            currentRowIndex    = r;
            
        }else if( columns[3] == 1 )
        {
            currentColumnIndex = 3;
            currentRowIndex    = r;
            
        }else if( columns[4] == 1 )
        {
            currentColumnIndex = 4;
            currentRowIndex = r;
            
        }else if( columns[5] == 1 )
        {
            currentColumnIndex = 5;
            currentRowIndex    = r;
        }
        
        
    }
    
    cout << abs(currentRowIndex-beautifulRow) + abs(currentColumnIndex-beautifulColumn);
    
    return 0;
    
    
}
