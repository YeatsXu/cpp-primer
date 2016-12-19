#include <iostream>

int main(void)
{
	int lowval, highval;

	std::cout << "请输入两个整数：" << std::endl;
	std::cin >> lowval >> highval;

	int i = lowval;
	while (i <= highval)
	{
		std::cout << i++ << std::endl;	
	}

	return 0;	
}
