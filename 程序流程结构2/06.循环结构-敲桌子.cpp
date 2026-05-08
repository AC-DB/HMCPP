#include<iostream>

int main6() {

	// 敲桌子
	// 输出100个数字
	for (int i = 1; i <= 100; i++) {
		// 判断敲桌子
		if ( i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			std::cout << "敲桌子" << std::endl;
		}
		else {
			std::cout << i << std::endl;
		}
	}
	
	return 0;
}