#include <iostream>
void getIntegers() {
	int x{ 0 };
	std::cout << "Enter an integer: ";
	std::cin >> x;
	int y{ 0 };
	std::cout << "Enter a larger integer: ";
	std::cin >> y;
	if (y < x) {
		std::cout << "Swapping the values\n";
		int temp{ y };
		y = x;
		x = temp;
	}
	std::cout << "The smaller value is " << x << "\nThe larger value is " << y;
}
int main()
{
	getIntegers();
	return 0;
}