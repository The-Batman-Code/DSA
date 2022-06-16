#include<iostream>
using namespace std;
float cosine(float x, float n)
{
    static float p=1, f=1, q=1;
    float r;
    if (n==0)
        return 1;
    else
    {
        r=cosine(x,n-1);
        p=p*x*x*(-1);
        f=f*(q)*(q+1);
        q=q+2;
        return r+p/f;
    }
}
int main()
{
    cout<<cosine(1,4);
    return 0;
}