#include<iostream>
using namespace std;
template<class T>
class Arithametic
{
    private:
        T a;
        T b;
    public:
        Arithametic(T a,T b);
        T add();
        T sub();
        ~Arithametic();
};
template<class T>
Arithametic<T>::Arithametic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template<class T>
T Arithametic<T>::add()
{
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arithametic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}
template<class T>
Arithametic<T>::~Arithametic()
{
    
}
int main()
{
    Arithametic<float> a1(1.2,1.4);
    cout<<a1.add()<<endl;
    cout<<a1.sub()<<endl;
    Arithametic<int> a2(5,4);
    cout<<a2.add()<<endl;
    cout<<a2.sub()<<endl;
    Arithametic<char> a3('A','B');
    cout<<(int)a3.add()<<endl;
    cout<<(int)a3.sub()<<endl;
}