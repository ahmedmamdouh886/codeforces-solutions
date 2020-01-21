#include <iostream>

using namespace std;

// https://codeforces.com/contest/231/problem/A

int main()
{
    
    unsigned short int problems, solvedProblems = 0, petya, vasya, tonya;
    
    cin >> problems;
    
    for( unsigned short int i = 1; i <= problems; i++ )
    {
        cin >> petya >> vasya >> tonya;
        
        if( ( petya + vasya + tonya ) >= 2 )
        {
            solvedProblems++;
        }
        
    }
    
    cout << solvedProblems << "\n";
    
    return 0;
    
}
