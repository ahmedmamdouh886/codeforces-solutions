#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int stonesCount, RemoveCount = 0;
    string stoneColors;
    
    cin >> stonesCount >> stoneColors;
    
    for (int i = 0; i < stonesCount; i++)
    {
        if( stoneColors[i] == stoneColors[i+1] )
            RemoveCount++;
    }
    
    
    cout << RemoveCount;
    
    
}
