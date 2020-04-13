#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int getRoundedAVG(float sum, int count) {
    return round(sum / count);
}

int main()
{
    int n, minLabWorks = 0;
    float avg, g, sum = 0;
    cin >> n;
    float labGrades[n];

    for (int i = 0; i < n; ++i)
    {
	    cin >> g;
	    sum += g;
	    labGrades[i] = g;
    }

    sort(labGrades, labGrades+(sizeof(labGrades)/sizeof(labGrades[0])));

    avg = getRoundedAVG(sum, n);

    if (5 != avg)
    {
        for (int i = 0; i < n; i++)
        {
            sum += (5 - labGrades[i]);
            avg = getRoundedAVG(sum, n);
            minLabWorks++;
		    if (5 == avg)
            {
                break;
            }
        }
    }

    cout << minLabWorks << endl;
}
