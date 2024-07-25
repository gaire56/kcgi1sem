#include <iostream>

using namespace std;

int main() {
    int width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Shape:\n";
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}