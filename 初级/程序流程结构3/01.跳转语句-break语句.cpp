#include<iostream>

int main1() {

	//1.在switch 语句中使用break
	std::cout << "请选择您挑战副本的难度：" << std::endl;
	std::cout << "1、普通" << std::endl;
	std::cout << "2、中等" << std::endl;
	std::cout << "3、困难" << std::endl;

	int num = 0;

	std::cin >> num;

	switch (num)
	{
	case 1:
		std::cout << "您选择的是普通难度" << std::endl;
		break;
	case 2:
		std::cout << "您选择的是中等难度" << std::endl;
		break;
	case 3:
		std::cout << "您选择的是困难难度" << std::endl;
		break;
	}


	//2.在循环语句中用break
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break; //跳出循环语句
		}
		std::cout << i << std::endl;
	}

	//3.在嵌套循环语句中使用break，退出内层循环
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			std::cout << "*" << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}