#include<iostream>

int main2() {

	// 选择结构 - 多行 if 语句
	int score = 0;

	// 输入分数
	std::cout << "请输入考试分数：" << std::endl;
	std::cin >> score;

	// 提示输入分数
	std::cout << "您输入的分数为：" << score << std::endl;

	// 判断分数
	if (score > 600)
	{
		std::cout << "我考上了一本大学" << std::endl;
	}
	else
	{
		std::cout << "我未考上一本大学" << std::endl;
	}

	return 0;
}