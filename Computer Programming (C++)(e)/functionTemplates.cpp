/*GAIRE ANANTA PRASAD M24W0272*/
#include <iostream>

using namespace std;

// Function template to calculate the average of an array
template<typename T, int size>
T average(T (&arr)[size]) {
    T sum = 0; // Variable to store the sum of elements
    for (int i = 0; i < size; ++i) {
        sum += arr[i]; // Accumulate sum of elements in the array
    }
    return sum / size; // Return the average
    
}
int main() {
    int IntArray[5] = {77, 54, 97, 13, 16}; // Integer array
    float FloatArray[5] = {6.6f, 7.7f, 8.8f, 9.9f, 5.5f}; // Float array

    // Calculate and print the average of IntArray
    cout << "Average of Integer: " << average(IntArray) << endl; 

    // Calculate and print the average of FloatArray
    cout << "Average of Float: " << average(FloatArray) << endl;

    return 0;
}
