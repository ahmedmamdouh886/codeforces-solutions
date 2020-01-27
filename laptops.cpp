#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

	  int n;
    bool happy = false;
    cin >> n;
    vector< pair<int,int> > vec;
 	
    int x, y;
    for (int i = 0; i < n; i++) {
         cin >> x >> y;
         vec.push_back(make_pair(x,y));
    }
 
    sort(vec.begin(), vec.end());
    
    for (int j = 0; j < n-1; j++) {
       if(vec[j].second > vec[j+1].second)
       {
           happy = !happy;
           break;
       }
    }
 	
    if (happy) {
        cout << "Happy Alex";
    }else{
        cout << "Poor Alex";
    }

    cout << endl;
    
    return 0;
}