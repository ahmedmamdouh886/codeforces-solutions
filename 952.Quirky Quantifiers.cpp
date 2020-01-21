#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    if( n & 1 )
        cout << 1 <<endl;
    else
        cout<< 0 <<endl;
    
    return 0;
}
