#include <iostream>

int getHeight() {
	int height{};
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;
	return height;
}
double getPos(int initial_height, int seconds) {
	double dist{ initial_height - (9.8 * (seconds * seconds)) / 2 };
	return dist >= 0.0 ? dist : 0.0;
}
void printPos(int initial_height, int seconds) {
	double val{ getPos(initial_height, seconds) };
	if (val == 0.0) std::cout << "At " << seconds << " seconds, the ball is on the ground\n";
	else std::cout << "At " << seconds << " seconds, the ball is at height: " << val << " meters\n";
}
int main()
{
	int height{ getHeight() };
	for (int i = 0; i <= 5; i++) {
		printPos(height, i);
	}
	return 0;
}