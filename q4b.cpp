#include <iostream>
using namespace std;

int main() {
    char str[100];
    int len = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // find length
    while (str[len] != '\0') {
        len++;
    }

    cout << "Reversed string: ";
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}
