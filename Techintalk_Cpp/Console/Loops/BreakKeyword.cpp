#include <iostream>

int main()
{
	// for continue statement

	std::cout << "This is continue statement example" << "\n";

	for (int iteration = 1; iteration < 6; iteration += 1) {
		if (iteration % 3 == 0) {
			break;
		}
		std::cout << iteration << "\n";
	}
	std::cout << "Program end" << "\n";
}