#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    vector<int> s(4);
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << 4 - s.size() << endl;
    return 0;
    
//    int colors[4], horseShoesCount = 0, colorCount = 4;
//
//    cin >> colors[0] >> colors[1] >> colors[2] >> colors[3];
//
//    while(colorCount--)
//    {
//
//        for (int k = colorCount;k < 4;k++ ) {
//
//            if( colorCount == k )
//                continue;
//
//            if( colors[colorCount] == colors[k] ){
//                horseShoesCount++;
//                break;
//            }
//
//        }
//
//
//    }
//
//    cout << horseShoesCount << endl;
    
}
