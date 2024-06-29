#include<iostream>
using namespace std;

class complex {
    private:
        int real;
        int img;
    public:
        complex(int r =0, int i = 0)
        {
            real = r;
            img = i;
        }
        complex(const complex &c)
        {
            real = c.real;
            img = c.img;
        }
        void display()
        {
            cout << real << "+" << img << "i";
        }
};
int main()
{
    complex c1(3, 4);
    complex c2 = c1;
    // complex c2(c1)
    complex c3;

    c3.display();
}