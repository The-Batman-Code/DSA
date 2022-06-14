#include<iostream>
using namespace std;
int expon(int m, int n)
{
    if (n==0)
        return 1;
    if (n%2==0)
        return expon(m*m,n/2);
    else
        return m*expon(m*m,(n-1)/2);
}
int main()
{
    cout<<expon(2,10);
    return 0;
}