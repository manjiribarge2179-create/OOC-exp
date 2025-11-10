#include<iostream>
using namespace std;
class constructor
{
public:
float area;
constructor()
{area=0;}
constructor(int a, int b)
{area=a*b;}
void disp()
{
cout<<area<<endl;
};
};
int main()
{
constructor o;
constructor o2(10,20);
o.disp();
o2.disp();
return 1;
}
