#include<iostream>

int main4() {

	// 元素逆置
	int arr[] = {1,3,2,5,4};
	int len = sizeof(arr) / sizeof(arr[0]) -  1;

	// 原数组
	for (int i = 0; i <= len; i++) {
		std::cout << arr[i] << std::endl;
	}

	// 逆置
	for (int i = 0; i <= len / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[len - i];
		arr[len - i] = temp;
	}

	// 结果
	for (int i = 0; i <= len; i++) {
		std::cout << arr[i] << std::endl;
	}
	
	return 0;
}