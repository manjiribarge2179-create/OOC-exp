#include<iostream>
using namespace std; 
class complex
{
private: 
float real;
double imaginary;
double sum;
int i;
public:
void input()
{
cout<<"Enter the real number:";
cin>>real;
cout<<"Enter the imaginary number:";
cin>>imaginary;
};
void display()
{
cout<<"Addition is:";
cout<<real<<'+'<<imaginary<<'i'<<endl;
cout<<"Subtraction is:";
cout<<real<<'-'<<imaginary<<'i'<<endl;
};
};
int main()
{
complex compobj;
compobj.input();
compobj.display();
return 0;
}

