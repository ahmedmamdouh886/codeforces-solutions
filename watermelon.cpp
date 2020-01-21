// Example program
#include <iostream>

using namespace std;

//https://codeforces.com/problemset/problem/4/A

int main()
{
    
    int weight;
    
    cin >> weight;
    
    
    if( weight <= 3 )
        cout << "NO" << "\n";
    else if( weight&1 )
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
    
    
    return 0;
    
}
