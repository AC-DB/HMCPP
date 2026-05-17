#include<iostream>

int main3() {

	int score = 0;

	std::cout << "请输入考试分数：" << std::endl;

	std::cin >> score;

	if (score > 600)
	{
		std::cout << "我考上了一本大学" << std::endl;
	}
	else if (score > 500)
	{
		std::cout << "我考上了二本大学" << std::endl;
	}
	else if (score > 400)
	{
		std::cout << "我考上了三本大学" << std::endl;
	}
	else
	{
		std::cout << "我未考上本科" << std::endl;
	}

	return 0;
}