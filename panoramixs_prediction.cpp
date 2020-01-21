#include <iostream>

using namespace std;

bool isPrime(int n, int m) {
    
    for (int i = 2; i < m; i++) {
        
        if (m % i == 0)
            return false;
        
    }
    
    for (int j = n+1; j < m; j++) {
        bool prime = true;
        for (int k = 2; k < n; k++) {
            
            if (j % k == 0) {
                prime = false;
                break;
            
            }
            
        }
        
        if(prime)
            return false;
    }
    
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << (isPrime(n, m) ? "YES" : "NO" );
}
