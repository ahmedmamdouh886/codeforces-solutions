#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int participants;
    cin >> participants;
    int before[participants], after[participants];
  
    for (int i = 0; i < participants; i++) {
        cin >> before[i] >> after[i];
    }

    bool rated = false, unrated = false;
    for (int s = 0; s < participants; s++) {

        if(before[s] != after[s]) {
            rated = true;
            unrated = false;
            break;
        }else{

            if(s != participants-1) {
                if(before[s] < before[s+1] && after[s] < after[s+1]) {
                    unrated = true;
                }
            }
            
        }

    }

    if(rated) {
        cout << "rated";
    }else if(unrated) {
        cout << "unrated";
    }else{
        cout << "maybe";
    }

    return 0;
}

// Nice solve.

/*

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n,counter=0,counter2=0;
    cin>>n;
    int arr[n],arr2[n],arr3[n];
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        cin.ignore();
        arr[i]=x;
        arr2[i]=y;
        arr3[i]=y;
    }

    for(int i=0;i<n;i++){
        if(arr[i]==arr2[i])
            ++counter;
    }

    sort(arr2,arr2+n);
    for(int i=n-1,j=0;i>=0;i--,j++)
    {
        if(arr2[i]==arr3[j])
         ++counter2;

    }
    if(counter!=n)
        cout<<"rated";
    else if(counter==n&&counter2==n)
    {
        cout<<"maybe";
    }
    else{
cout<<"unrated";

    }

    return 0;
}

*/







