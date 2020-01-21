#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ber, bir, res = "YES";
    int birLength;
    
    cin >> ber >> bir;
    
    birLength = bir.length() - 1;
    
    for (int i = 0; i < ber.length(); i++)
    {
        
        if( ber[i] != bir[birLength] ){
            res = "NO";
            break;
        }

        birLength--;
        
    }
    
    cout << res;
    
}
