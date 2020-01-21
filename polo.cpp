#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, rSeg, lSeg, moves = 0;
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> lSeg >> rSeg;
        if ((rSeg % k) != 0) {
            rSeg++;
            if((rSeg % k) == 0)
                moves++;
        }else if ((lSeg % k) != 0) {
            lSeg--;
            if((lSeg % k) == 0)
                moves++;
        }
    }
    
    cout << moves << endl;
    
    return 0;
}
