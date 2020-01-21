#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, f, s, op;
    cin >> n;
    int h[n];
    
    for (int i = 0; i < n; i++)
        cin >> h[i];
    
    op = abs(h[0] - h[n-1]);
    f = 0;
    s = n-1;
    for (int j = 0; j < n-1; j++)
    {
        
            if( abs(h[j] - h[j+1]) < op )
            {
                f = j;
                s = j+1;
                op = abs(h[j] - h[j+1]);
            }

    }
    
    f++;
    s++;
    
    cout << f << " " << s;
}
