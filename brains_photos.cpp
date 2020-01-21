#include <iostream>

using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    char hash;
    bool colored = false;
    cin >> n >> m;
    while (n--) {
        for (int i = 0; i < m; i++) {
            cin >> hash;
            if (!colored) {
                if((hash != 'B' && hash != 'W' && hash != 'G'))
                    colored = true;
            }
        }
    }
    
    
    cout << (colored ? "#Color" : "#Black&White") << endl;
    
    return 0;
    
}
