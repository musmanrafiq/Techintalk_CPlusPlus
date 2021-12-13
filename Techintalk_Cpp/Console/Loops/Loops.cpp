#include <iostream>
using std::cout;


int main()
{
    bool shouldRepeat = false;

    for (int i = 0; i < 5; i++) {
       // cout << "Hello World!\n";
    }

    int count = 0;

    while (shouldRepeat) {
       cout << "Hello World!\n";
       //count++;
    }
        
    do {
        cout << "Hello World!\n";
        //count++;
    } while (shouldRepeat);
}

void ForLoop() {
    for (int i = 0; i < 5; i++) {
        cout << "Hello World!\n";
    }
}

