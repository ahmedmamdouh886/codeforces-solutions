#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int levels;
    cin>>levels;
 
    int x,y;
 
    set<int> myset;
 
    for(int i=0;i<2;i++)
    {
        cin>>x;
        for(int j=0;j<x;j++)
        {
            cin>>y;
            myset.insert(y);s
        }
    }
    
	cout << ((myset.size()==levels) ? "I become the guy." : "Oh, my keyboard!");
        
}
