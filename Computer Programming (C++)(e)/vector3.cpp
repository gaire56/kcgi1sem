#include<iostream>
using namespace std;

class course
{
    public:
    string courseName;

    course(string name)
    {
        courseName=name;
    }
};

int main()
{
    course cl("c++ fundamental");
    cout << cl.courseName;
}