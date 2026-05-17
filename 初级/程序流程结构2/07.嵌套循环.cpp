#include<iostream>

int main7() {

	//外层循环执行1次，内层循环执行1轮
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout << "*" << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}