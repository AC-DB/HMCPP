#include<iostream>

int main7() {

	//请给电影评分 
	//10 ~ 9   经典   
	// 8 ~ 7   非常好
	// 6 ~ 5   一般
	// 5分以下 烂片

	int score = 0;
	std::cout << "请给电影打分" << std::endl;
	std::cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		std::cout << "经典" << std::endl;
		break;
	case 8:
		std::cout << "非常好" << std::endl;
		break;
	case 7:
	case 6:
		std::cout << "一般" << std::endl;
		break;
	default:
		std::cout << "烂片" << std::endl;
		break;
	}

	return 0;
}