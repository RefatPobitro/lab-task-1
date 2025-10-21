#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;

    cout << "Enter a line: ";
    getline(cin, input);

    // Check if line starts with // (single line comment)
    if (input.length() >= 2 && input[0] == '/' && input[1] == '/') {
        cout << "This is a single-line comment." << endl;
    }
    // Check if line starts with /* (start of multi-line comment)
    else if (input.length() >= 2 && input[0] == '/' && input[1] == '*') {
        cout << "This is a multi-line comment start." << endl;
    }
    else {
        cout << "This is not a comment line." << endl;
    }
    return 0;
}

