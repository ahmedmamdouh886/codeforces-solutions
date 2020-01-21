#include <iostream>
#include <string>

using namespace std;

int main()
{
	string rows[4];

	cin >> rows[0] >> rows[1] >> rows[2] >> rows[3];

	string res = "NO";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if(rows[i][j] == rows[i][j+1])
			{
				if(rows[i+1][j] == rows[i+1][j+1]) 
				{
					if(rows[i][j] == rows[i+1][j]) {
						res = "YES";
						break;
					}
				}
			}else if(rows[i][j] != rows[i+1][j]) {

				if(rows[i][j+1] == rows[i+1][j+1]) 
				{
					res = "YES";
					break;
				}
			}else if(rows[i][j+1] != rows[i+1][j+1]) {

				if(rows[i][j] == rows[i+1][j]){
					res = "YES";
					break;
				}

			}
		}

	}
	
    cout << res << endl;
    
}
