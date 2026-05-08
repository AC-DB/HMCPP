#include<iostream>

int main4() {
	
	// 水仙花数
	int n = 1;
	int a = 0;
	int b = 0;
	int c = 0;

	do {
		
		a = n % 10;
		b = n / 10 % 10;
		c = n / 100;

		if (n == a * a * a + b * b * b + c * c * c) {
			std::cout << n << std::endl;
		}

		n++;
	} while ( n < 1000 );

	return 0;
}