#include<iostream>

int main3() {

	// 五个小猪体重
	int arr[5] = { 300,350,200,400,250 };
	int big = 0;
	
	for (int i = 0; i < 5; i++) {
		if (big < arr[i]) big = arr[i];
	}

	std::cout << "体重最大是：" << big << std::endl;

	return 0;
}