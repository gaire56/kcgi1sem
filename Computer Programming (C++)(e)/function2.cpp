#include <iostream>
using namespace std;
void doB() {
    cout << "In doB()\n";
}

void doA()
{
    cout << "Starting doA()\n";
    doB();
    cout << "Ending doA()\n";
}
 //Definition of function main()
 int main ()
 {
    cout<<"Starting main()\n";
    doA();
    cout <<"Ending main()\n";
    return 0;
 }