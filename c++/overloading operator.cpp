/*GAIRE ANANTA PRASAD M24W0272*/
#include <iostream>
using namespace std;
class Date {
private:
    int day, month, year;
public:
    //Default Constructor
    Date(int d = 0, int m = 0, int y = 0) : day(d), month(m), year(y) {}
    // Overloading the input stream operator (>>)
    friend istream& operator>>(istream& input, Date& date) {
        cout << "Please enter the day: "; //asking date
        input >> date.day;
        cout << "Please enter the month: "; //asking month
        input >> date.month;
        cout << "Please enter the year: "; //asking year
        input >> date.year;
        return input;
    }
    // Overloading the output stream operator (<<)
    friend ostream& operator<<(ostream& output, const Date& date) {
        output << date.day << '/' << date.month << '/' << date.year;
        return output;
    }
};
int main() {
    Date myDate;
    cout << "Enter date information:\n";
    cin >> myDate;
    cout << "The date entered is: " << myDate << endl;
    return 0;
}
