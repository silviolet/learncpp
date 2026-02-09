#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
	unsigned int num{};
	std::cout << "Input a number between 0 and 255: ";
	std::cin >> num;
	std::cout << "Your number in binary is: ";
	uint8_t cur{ 128 };
	for (int i = 0; i < 8; i++) {
		if (i == 4) std::cout << ' ';
		if (num >= cur) {
			std::cout << 1;
			num -= cur;
		}
		else std::cout << 0;
		cur /= 2;
	}

}