#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string firstTeam, secondTeam, team;
    unsigned short int firstTeamScore, secondTeamScore = 0, n, i = 0;
    cin >> n;
    cin >> firstTeam;
    firstTeamScore++;
    n--;
    while(n--) {
        cin >> team;
        if(team == firstTeam)
            firstTeamScore++;
        else{
            if(i == 0) {
                secondTeam = team;
            }
            secondTeamScore++;
            i++;
        }
    }

    cout << (firstTeamScore > secondTeamScore ? firstTeam : secondTeam);

    return 0;
}