#include <iostream>
#include <string>

using namespace std;

int main()
{
        string a, b;
        cin >> a >> b;

        int res;
        if(a == b)
        {
            res = -1;
        }else{
            res = a.size() > b.size() ? a.size() : b.size();
        }

        cout << res << endl;

        return 0;
}
