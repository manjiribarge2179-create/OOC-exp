#include<iostream>
using namespace std;
class rectangle
{
private:
double length;
double width;
public:
rectangle():length(1.0),width(1.0){}
rectangle(double len,double wid):length(len),width(wid){}
~rectangle()
{
cout<<"Rectangle object destroyed."<<endl;
}
double getwidth() const
{
return width;
}
double getlength() const
{
return length;
}
void setwidth(double wid)
{
width=wid;
}
double calculateArea() const
{
return length*width;
}
double calculatePerimeter() const
{
return 2*(length*width);
}
};
int main()
{
rectangle rect(4.0,40.0);

cout<<"Rectangle properties: "<<endl;
cout<<"Length: "<<rect getlength()<<endl;
cout<<"Width: "<<rect getwidth()<<endl;
cout<<"Area: "<<rect calculateArea()<<endl;
cout<<"Perimeter: "<<rect calculatePerimeter()<<endl;
return 0;
}

