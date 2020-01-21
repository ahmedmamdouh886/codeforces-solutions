#include <iostream>

using namespace std;

int main()
{
    short int team;
    
    cin >> team;
    
    short int home[team-1], guest[team-1], games = 0;
    
    for(int i = 0;i<team;i++)
    {
        cin >> home[i] >> guest[i];
    }
    
    for(int i = 0;i<team;i++)
    {
        
        for(int j = 0;j<team;j++)
        {
            
            if( i == j )
                continue;
            
            if( guest[j] == home[i] )
                games++;
            
        }
        
    }
    
    cout << games;
    
}
