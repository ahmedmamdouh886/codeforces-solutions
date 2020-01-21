#include <iostream>
using namespace std;

//http://codeforces.com/problemset/problem/118/A
//A. String Task

bool is_vowel(char c) {
switch(c)
{
// check for capitalized forms as well.
case 'a':
case 'e':
case 'i':
case 'u':
case 'o':
case 'y':
return true;
default:
return false;
}
}

int main()
{
string s;
cin >> s;
for( int i=0; i < s.size() ;i++ )
{
	s[i] = tolower(s[i]);
	if(!is_vowel(s[i])) cout << '.' << s[i];
}

cout << endl;
return 0;
}