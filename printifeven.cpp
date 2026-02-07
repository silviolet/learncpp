#include <iostream>
constexpr void isEven(const int i) {
	if (i % 2) std::cout << i << " is odd";
	else std::cout << i << " is even";
}
int main()
{
	int input{};
	std::cout << "Enter an integer: ";
	std::cin >> input;
	isEven(input);
	return 0;
}