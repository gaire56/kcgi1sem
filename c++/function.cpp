#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int x =10;

int main () {
    int x = 20; {
        int m = x;
        int x = 30;
        cout << m <<end1;
        cout << x <<end1;
        cout << ::x<<end1;
        return 0;
    }
}