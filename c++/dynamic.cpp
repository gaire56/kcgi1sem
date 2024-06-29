#include<iostream>
#include<new>
using namespace std;

class Room {
    private:
    int length;
    int breadth;    
};

int main() {
    Room *p3 = new Room[5];
    int *p = new int(5);
    int *p2 = new int[5];
    cout << *p;

    delete p;
    delete[] p2;
    delete[] p3;

}