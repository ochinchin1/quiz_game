#include <iostream>
#include <fstream>

#include "funkcijos.h"

using namespace std;


int main()
{
	int n;
	int temp1 = 0;
	while (temp1 != 3)
	{
		meniu();
		cin >> n;
		if (n == 1)	
		{
			c1();
		}
		if (n == 2)
		{
			c2();
		}
		if (n == 3)
		{
			c3();
			return 0;
		}
		temp1 = n;
	}

	return 0;
}