#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l, int b);
        int area();
        int perimeter();
        int getlength();
        int getbreadth();
        void setlength(int l);
        void setbreadth(int b);
        ~Rectangle();
};
Rectangle::Rectangle()
{
    length=0;
    breadth=0;
}
Rectangle::Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
int Rectangle::getlength()
{
    return length;
}
int Rectangle::getbreadth()
{
    return breadth;
}
void Rectangle::setlength(int l)
{
    length=l;
}
void Rectangle::setbreadth(int b)
{
    breadth=b;
}
Rectangle::~Rectangle()
{
    
}
int main()
{
    int a=0,b=0,area=0,peri=0;
    cout<<"Enter the length and breadth";
    cin>>a>>b;
    Rectangle r(a,b);
    area=r.area();
    peri=r.perimeter();
    cout<<"Area"<<area<<endl;
    cout<<"Perimeter"<<peri<<endl;
    cout<<"Length"<<r.getlength()<<endl;
    cout<<"Breadth"<<r.getbreadth()<<endl;
    r.setlength(15);
    r.setbreadth(10);
    cout<<"New Length"<<r.getlength()<<endl;
    cout<<"New Breadth"<<r.getbreadth()<<endl;
}
