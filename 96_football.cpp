#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int d = 1;
    
    cin >> s;

    for (int i = 0; i < s.length() - 1; ++i)
    {
        if(d >= 7)
            break;

        if(s[i] == s[i+1]) {
            d++;
        }else{
            d = 1;
        }
    }

    if(d >= 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;

}
