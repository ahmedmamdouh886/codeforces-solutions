#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, support = 0;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    sort(s, s+(sizeof(s)/sizeof(s[0])));
        
    for (int i = 1; i < n-1; i++) {
            
            if(s[i] > s[0] && s[i] < s[n-1])
                support++;
        
    }
    
    cout << support << endl;
    
}
