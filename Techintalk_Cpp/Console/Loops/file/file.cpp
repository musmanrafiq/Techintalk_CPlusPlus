#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::fstream;
using std::endl;
using std::string;

void writeRecord(string input) {
    string filename("tmp.txt");
    fstream file;

    file.open(filename, std::ios_base::app);
    if (file.is_open()) {
        file.write(input.data(), input.size());
        file << endl ;
    }
}

void readHistory() {
    fstream newfile;
    newfile.open("tmp.txt", std::ios::in); 
    if (newfile.is_open()) {
        string tp;
        while (getline(newfile, tp)) {
            cout << tp << "\n";
        }
        newfile.close();
    }
}

int main()
{
    writeRecord("Test");

    readHistory();

    cout << "Done !" << endl;

    return EXIT_SUCCESS;
}


