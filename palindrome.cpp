#include <iostream>
#include <string>
#include <locale>

using namespace std;

// two pointer tech.

bool isPalindrome(string word)
{
    int length = word.length()-1, i = 0;
    
    while( length != i )
    {
        if( tolower(word[length]) == tolower(word[i]) ){
            i++;
            length--;
        }else{
            return false;
        }
    }
    
    return true;
}
int main()
{
    string word;
    cin >> word;
    cout << isPalindrome(word) << endl;
}
