#include <iostream>
using namespace std;

// Function to find the average of an array
template<typename T>
T average(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int IntArray[] = {2, 3, 3, 4, 5,};
    float FloatArray[] = {8.1, 7.2, 6.3, 5.4, 4.5};
    int size = sizeof(IntArray) / sizeof(IntArray[0]); // Calculate the actual size of the array

    // Finding the average of integer array
    cout << "Average of integer array: " << average(IntArray, size) << endl;

    // Finding the average of float array
    cout << "Average of float array: " << average(FloatArray, size) << endl;

    return 0;
}