#include <iostream>
#include <iterator>
#include <map>
#include<algorithm>

using namespace std;


int minimum( int a, int b, int c )
{
    int min = ( a < b ) ? a : b;
    return ( ( min > c ) ? c : min );
}

int main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int children, skill, index = 1, min;
    map<int, int> ones;
    map<int, int> tows;
    map<int, int> threes;
    
    cin >> children;
    
    while (children--) {
        
        cin >> skill;
        
        if( skill == 1 )
        {
            ones[index] = skill;
        }else if( skill == 2 )
        {
            tows[index] = skill;
        }else if( skill == 3 )
        {
            threes[index] = skill;
        }
        
        index++;
    
    }
    
    min = minimum(ones.size(), tows.size(), threes.size());
    
    map<int,int>::iterator it_one   = ones.begin();
    map<int,int>::iterator it_two   = tows.begin();
    map<int,int>::iterator it_three = threes.begin();
    
    cout << min << endl;
    
    for (int i = 0; i < min; i++)
    {
        cout << it_one->first << " " << it_two->first << " " << it_three->first << endl;
        advance(it_one, 1);
        advance(it_two, 1);
        advance(it_three, 1);
    }
    
}
