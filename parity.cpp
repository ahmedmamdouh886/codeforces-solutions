#include <iostream>
#include <math.h>

using namespace std;

// https://codeforces.com/problemset/problem/1110/A
// A. Parity

int b, k, kSwap;
long int sum = 0;

int main()
{
    
    scanf("%d %d", &b, &k);
    int kList[k];
    kSwap = k;
    
    for( int i = 1;i <= k;i++ )
        cin >> kList[i];
    
    for( int j = 1;j <= k;j++ ) {
        
        kSwap--;
        
        if( kSwap >= 1 )
            sum += (kList[j] * pow(b, kSwap));
        else
            sum += kList[j];
        
    }
  
    if( sum&1 )
        cout << "odd" << "\n";
    else
        cout << "even" << "\n";
    
    return 0;
    
}
