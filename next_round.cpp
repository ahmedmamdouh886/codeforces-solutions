#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    short int participants, participantPlace, advancers = 0;
    cin >> participants >> participantPlace;
    
    short int scores[participants];
    
    for (int i = 0; i < participants; i++) {
        cin >> scores[i];
    }
    
    if(scores[0] != 0) {
        for (int j = 0; j < participants; j++) {
            if(scores[participantPlace-1] <= scores[j] && scores[j] != 0)
                advancers++;
        }
    }
    
    cout << advancers << endl;
    
    return 0;
	
}
