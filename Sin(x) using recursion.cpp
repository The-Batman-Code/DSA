#include<iostream>
using namespace std;
float sine(float x, float n)
{
    static float p=x, f=1, q=1;
    float r;
    if (n==0)
        return x;
    else
    {
        r=sine(x,n-1);
        p=p*x*x*(-1);
        f=f*(q+1)*(q+2);
        q=q+2;
        return r+p/f;
    }
}
int main()
{
    cout<<sine(1,4);
    return 0;
}