#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k, count(0);
    cin >> n >> k;

    string s;
    while (n--)
    {
        int lucky(0);
        cin >> s;
        // Unsigned integral type --> Alias of one of the fundamental unsigned integer types.
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                lucky++;
            }
        }
        if (lucky <= k)
        {
            count++;
        }
    }
    
    cout << count << endl;

}
