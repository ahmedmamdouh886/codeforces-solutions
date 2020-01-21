#include <iostream>
#include <string>

using namespace std;

// https://codeforces.com/contest/734/problem/A

int main()
{
    
    string OutCome;
    unsigned int gameCount, ACounter = 0, DCounter = 0;
    
    cin >> gameCount >> OutCome;
    
    for( unsigned int i = 0;i<gameCount;i++ )
    {
        if( OutCome[i] == 'A' )
            ACounter++;
        else
            DCounter++;
    }
    
    
    if( ACounter > DCounter )
        cout << "Anton";
    else if( ACounter < DCounter )
        cout << "Danik";
    else
        cout << "Friendship";
    
    return 0;
    
}
