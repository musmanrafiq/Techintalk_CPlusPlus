#include <iostream>

using namespace std;

int main()
{
	cout << "This is nested loops example" << endl;

	for (int fileIndex = 0; fileIndex < 5; fileIndex++) {
		cout << "Iteration # " << fileIndex << endl;

		int fileLineNumber = 1;

		while (fileLineNumber < 4) {
			cout << "Inner Iteration # " << fileLineNumber << endl;
			fileLineNumber += 1;
		}
	}
}