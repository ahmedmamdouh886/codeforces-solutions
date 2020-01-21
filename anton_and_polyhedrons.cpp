#include <iostream>

using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int total = 0, n;
    string f;
    cin >> n;
    while (n--) {
        
        cin >> f;
        
        
        if(f == "Tetrahedron")
        {
            total += 4;
        }else if(f == "Cube")
        {
            total += 6;
        }else if(f == "Octahedron")
        {
            total += 8;
        }else if(f == "Dodecahedron")
        {
            total += 12;
        }else if(f == "Icosahedron")
        {
            total += 20;
        }
    
    }
    
    cout << total;
    
}
