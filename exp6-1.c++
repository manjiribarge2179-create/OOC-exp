#include<iostream>
using namespace std;
class vehical
{
public:
vehical()
{
cout<<"This is vehical\n";
}
};
class car : 
public vehical
{
public:
car()
{
cout<<"this vehical is car\n";
}
};
class bus : public vehical
{
public:
bus()
{
cout<<"This vehical is bus\n";
}
};
int main()
{
car obj1;
bus obj2;
return 0;
}

