#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, sum = 0, m_sum = 0, c = 0;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        sum += m[i];
    }
    
    sort(m, m+(sizeof(m)/sizeof(m[0])), greater<int>());
    
    for (int i = 0;i < n;i++) {
        m_sum += m[i];
        c++;
        if(m_sum > abs(m_sum-sum))
            break;
        
        
    }
    
    
    cout << c << endl;
    
}
