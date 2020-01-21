#include <iostream>
#include <string>

using namespace std;

int main()
{
        short int n, x = 0;
        string input;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            if( input == "X++" || input == "++X" )
                x++;
            else
                x--;
        }
    
        cout << x << endl;
    
}
