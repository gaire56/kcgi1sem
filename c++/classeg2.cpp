#include <iostream>
using namespace std;
int absl(int);
double absl(double);
int main()
{
    int a = -6;
    cout << absl(a) ;
    double d=-5.9;
    cout << absl(d);
    return 0;
}
int absl(int a)
{
    // cout << "from int fn" << end1;
    return a < 0? -a:a;  // conditional operator checks if cond.true, if false gives the answer after colon

}
double absl(double a)
{
    // cout << "from doubel fn";
    return a < 0 ? -a:a;
}