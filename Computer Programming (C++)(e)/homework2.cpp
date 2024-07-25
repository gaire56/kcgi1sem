#include <iostream>
#include <array>
using namespace std;
int main(){

    //Create an array
    array <int, 10> arr{1, 9, 3, 27,16, 54, 13, 97, 28, 13};
    if (!arr.empty()) {

        //Print the size of the array
        cout << "array size: "<< arr.size(); 
    }

    //Display the array element
    cout << " \n----------------------- \n";
    for (int i=0; i < arr.size(); i++) {
        cout << arr[i] << "\n";
    }
    cout << " ----------------------- ";

    cout << " \n First element: " <<arr.front(); //Print the first element
    cout << " \n Last element: " << arr.back(); //Print the last element
    return 0;
}