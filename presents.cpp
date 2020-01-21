#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{

    int n, p;
    map<int, int>presents;
    map<int, int>::iterator itr;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p;
        presents.insert(pair<int, int>(p, i));
    }

    for (itr = presents.begin();itr != presents.end();++itr)
          cout << itr->second << " ";
    
}
