#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.14;
class shape
{
public:
virtual double calculateArea() const=0;
virtual double calculatePerimeter() const=0;
};
class circle:public shape
{
private:
double radius;
public:
circle(double rad):radius(rad){}
double calculateArea() const override
{
return PI*radius*radius;
}
double calulatePerimeter() const override
{
return 2*PI*radius;
}
};
class rectangle:public shape
{
private: 
double length;
double width;
public:
rectangle(double len,double wid):length(len),width(wid){}
double calculateArea() const override
{
return length*width;
}
double calculatePerimeter() const override
{
return 2*(length+width);
}
};
int main()
{
circle(7.0);
rectangle(4.2,8.0);
cout<<"Circle: "<<endl;
cout<<"Area: "<<circle.calculateArea()<<endl;
cout<<"Perimeter: "<<circle.calulatePerimeter()<<endl;
cout<<"Rectangle: "<<endl;
cout<<"Area: "<<rectangle.calculateArea()<<endl;
cout<<"Perimeter: "<<rectangle.calulatePerimeter()<<endl;
return 0;
}























