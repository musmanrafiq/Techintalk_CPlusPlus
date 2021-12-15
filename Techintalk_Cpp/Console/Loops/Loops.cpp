#include <iostream>

int main()
{
	// for loop
	for (int iteration = 0; iteration < 5; iteration++) {
		std::cout << "Iteration # " << iteration << "\n";
	}

	// while loop
	int count = 0;
	while(count < 5) {
		std::cout << "Iteration # " << count << "\n";
		count += 1;
	}
}

