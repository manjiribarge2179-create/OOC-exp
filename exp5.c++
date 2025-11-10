#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{int s,l,b;
float r, bs,ht;
cout<<"enter the side of square: ";
cin>>s;
cout<<"enter the length and breadth of rctangle: ";
cin>>l>>b;
cout<<"enter the radius of circle: ";
cin>>r;
cout<<"enter the hight and base of triangle: ";
cin>>ht>>bs;
cout<<"Area of square:"<<area(s)<<endl;
cout<<"Area of rectangle:"<<area(l,b)<<endl;
cout<<"Area of circle:"<<area(r)<<endl;
cout<<"Area of triangle:"<<area(ht,bs)<<endl;
}
int area(int s)
{return s*s;}
int area(int l,int b)
{return l*b;}
float area(float r)
{return 3.14*r*r;}
float area(float ht,float bs)
{return 0.5*ht*bs;}

