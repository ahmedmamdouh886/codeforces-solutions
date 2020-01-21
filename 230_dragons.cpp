#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int s, d, d_strength, bonus;
    bool next_level = true;
    
    cin >> s >> d;
    
    vector < pair<int, int> > vec;
    
    for (int i = 0; i < d; ++i)
    {
        cin >> d_strength >> bonus;
        vec.push_back(make_pair(d_strength, bonus));
    }

    sort(vec.begin(), vec.end());

    for (int j = 0; j < d; ++j)
    {
        if(s > vec[j].first){
            s += vec[j].second;
        }else{
            next_level = !next_level;
            break;
        }
    }

    if(next_level)
        cout << "YES";
    else
        cout << "NO";

    return 0;

}
