#include <iostream>
#include <string>

using namespace std;

int main()
{
        string s, t;
        cin >> s >> t;
        size_t pos = 0;
        for (size_t i = 0; i < t.length(); ++i)
        {
            if (t[i] == s[pos])
            {
                pos += 1;
            }
        }
        cout << pos + 1 << endl;
    
// My code
//    string s, t;
//    int p = 0, pIndex = 0;
//
//    cin >> s >> t;
//
//    for(int i = 0;i<s.length();i++)
//    {
//
//        for (int j = pIndex;j<t.length();j++)
//        {
//
//            pIndex = j+1;
//            if(s[i] == t[j]){
//                p = i+1;
//                break;
//            }else
//            {
//                continue;
//            }
//        }
//
//    }
//
//    cout << p+1;
    
}
