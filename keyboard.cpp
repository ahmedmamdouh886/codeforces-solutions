#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    short int index = 0;
    string characters, originChars;
    char direction;
    char bChars[] = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'', '`', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/' };
    vector<char> boardChars(bChars, bChars+34);
    
    cin >> direction >> characters;
    
    for (int i = 0; i < characters.size(); i++){
        vector<char>::iterator it = find(boardChars.begin(), boardChars.end(), characters[i]);
        index = distance(boardChars.begin(), it);
        
        if (direction == 'L') {
            index++;
        }else{
            index--;
        }
        
        originChars += boardChars.at(index);
    }
    
    cout << originChars << endl;

    return 0;
}
