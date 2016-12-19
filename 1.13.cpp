/*
#include <iostream>

int main(void)
{
	int sum = 0;

	for (int val = 50; val <= 100; val++)
	{
		sum += val;	
	}

	std::cout << sum << std::endl;

	return 0;	
}
*/

#include <iostream>

int main(void)
{
	int lowval, highval;

	std::cout << "请输入两个整数：lowval = , highval = " << std::endl;
	
	std::cin >> lowval >> highval;

	for (int i = lowval; i <= highval; i++)
	{
		std::cout << i << std::endl;
	}

	return 0;	
}
			
