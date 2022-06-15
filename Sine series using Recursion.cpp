#include <iostream>

using namespace std;
double sine(double x, double n)
{
    static double p=x,f=1;
    double r;
    if (n==1)
        return x;
    else
    {
        r=sine(x,n-1);
        p=p*x*x*(-1);
        f=f*(n-1)*(n)*(n+1);
        return r+p/f;
    }
}
int main()
{
    cout<<sine(1, 15);

    return 0;
}