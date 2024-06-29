#include<iostream>
using namespace std;

class complex
{
private:
    /* data */
    int real;
    int img;
public:
 complex(int r, int i)
     {
        real =r ;
        img =i;
     }

 complex(complex &c) //copy cinsructor created

 {
    c.real = 9;
    real = c.real;
    img=c.img;
 }

 void display()

 {
    cout << real << "+" <<img << "i";
 }

};

int main ()
{
    complex c1 (3,4);
    complex c2 = c1;
    // complex c2(c1)
    c2.display();
}

