#include <iostream>

int main()
{
	// for loop
	std::cout << "This is for loop" << "\n";

	for (int iteration = 0; iteration < 5; iteration++) {
		std::cout << "Iteration # " << iteration << "\n";
	}

	// while loop
	std::cout << "This is while loop" << "\n";
	int count = 0;
	while(count < 5) {
		std::cout << "Iteration # " << count << "\n";
		count += 1;
	}
}

