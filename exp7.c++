#include<iostream>
#include<stdio.h>
using namespace std;
class person
{
protected:
std::string name;
int age;

public:
person(string n,int a);
virtual void displayinfo()
{
cout<<"Name: "<<name<< "\nAge: "<<age<<endl;
}
};
class employee
{
protected:
int id;

public:
employee(int i):id(i){}
virtual void displayinfo()
{
cout<<"ID: "<<id<<endl;
}
};
class manager:
public person, public employee
{
private:
string department;

public:
manager(string name,int age,int id, string dept):
person(name,age),employee(id),department(dept){}

void displayinfo()
{
person::displayinfo();
employee::displayinfo();
cout<<"Deparment: "<<department<<endl;
}
};
int main()
{
manager mgr("Siddhi Chougale",20,2025,"CSE");
mgr.displayinfo();
return 0;
}
