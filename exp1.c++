#include<iostream>
using namespace std;
class student
{
private:
char name[30];
int rollno;
float marks;
public:
void inputDetails()
{
cout<<"enter student name";
cin>>name;
cout<<"enter rollno";
cin>>rollno;
cout<<"enter marks";
cin>>marks;
}
void displayDetails()
{
cout<<"student name:"<<name<<endl;
cout<<"rollnumber:"<<rollno<<endl;
cout<<"marks:"<<marks<<endl;
}
};
int main()
{
student studentObj;
studentObj.inputDetails();
cout<<"\nstudent Details:\n";
studentObj.displayDetails();
return 0;
}
