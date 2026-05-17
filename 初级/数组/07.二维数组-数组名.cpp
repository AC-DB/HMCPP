#include<iostream>

int main7() {

	//二维数组数组名
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	std::cout << "二维数组大小： " << sizeof(arr) << std::endl;
	std::cout << "二维数组一行大小： " << sizeof(arr[0]) << std::endl;
	std::cout << "二维数组元素大小： " << sizeof(arr[0][0]) << std::endl;

	std::cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << std::endl;
	std::cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << std::endl;

	//地址
	std::cout << "二维数组首地址：" << arr << std::endl;
	std::cout << "二维数组第一行地址：" << arr[0] << std::endl;
	std::cout << "二维数组第二行地址：" << arr[1] << std::endl;

	std::cout << "二维数组第一个元素地址：" << &arr[0][0] << std::endl;
	std::cout << "二维数组第二个元素地址：" << &arr[0][1] << std::endl;

	return 0;
}