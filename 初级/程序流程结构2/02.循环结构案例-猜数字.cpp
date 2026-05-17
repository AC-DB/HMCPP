#include<iostream>
#include<ctime>

int main2() {

	// 随机数种子
	std::srand((unsigned int)time(NULL));
	// 生成随机数(1~100)
	int num = std::rand() % 100 + 1;

	// 玩家猜测
	int val = 0;
	std::cout << "开始猜测数字" << std::endl;

	while(val != num)
	{
		std::cin >> val;

		if (val > num) {
			std::cout << "太大了" << std::endl;
		}
		else if (val < num)
		{
			std::cout << "太小了" << std::endl;
		}
	}

	std::cout << "猜对了";

	return 0;
}