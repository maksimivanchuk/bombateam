#include <iostream>
#include <cstdlib>
using namespace std;

int test(char str[100])
{
	int n = strlen(str), res = 0;
    string num = "";

	for (int i = 0; i < n; i++)
	{
		while (((num == "" && str[i] == '-') || (str[i] >= '0' && str[i] <= '9')) && i < n)
		{
			num += str[i];  	i++;
		}
			if (i<n && str[i] == '-')
				i--;
			if (num != "")
			{
				res += atoi(num.c_str());
				num = "";
			}
		}
		return res;
	}