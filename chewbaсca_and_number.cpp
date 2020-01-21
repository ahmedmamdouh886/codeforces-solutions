#include <iostream>

using namespace std;

// http://codeforces.com/contest/514/problem/A

int main()
{
    string x;
    cin >> x;
    
    int digit = 0;
    for (int i = 0; i < x.length(); i++) {
        digit = x[i] - '0';
        
        if ((digit == 9 && i == 0) || digit <= 4) {
            cout << digit;
        }else {
            cout << 9 - digit;
        }
    }

    return 0;
}
