#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string file;

    ifstream filein(file.c_str());

    cout << "Insert Path" << endl;
    cin >> file;

    cout << file << endl;

    filein.open(file.c_str(), ios::in);

    for (string line; getline(filein, line);) {
        cout << line << endl;
    }

    return 0;
}