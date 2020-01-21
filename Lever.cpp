#include <cstdio>
#include <iostream>
#include <string>


//http://codeforces.com/problemset/problem/376/A


int main(){

    std::string input(""); getline(std::cin, input);
    long long leverPos = input.find('^');
    long long left(0), right(0);

    for(int k = 0; k < leverPos; k++)
	{
		if(input[k] != '=')
		{
			left += (leverPos - k) * (input[k] - '0');
		}
	}
    
	
	for(int k = leverPos + 1; k < input.size(); k++)
	{
		if(input[k] != '=')
		{
			right += (k - leverPos) * (input[k] - '0');
		}
	}
    
    
    std::cout << left << " " << right << "\n";
    
    
    if(left == right)
	{
		std::cout << "balance" << std::endl;
	}
    else if(left < right)
	{
		std::cout << "right" << std::endl;
	}
    else{
		std::cout << "left" << std::endl;
	}

    return 0;

}
