#include<iostream>
using namespace std;
class savingacc
{private:
string accholdername;
int accno;
double balance;
double intrate;

public:
savingacc(string name,int accNo,double intbal,double rate)
{accholdername=name;
accno=accNo;
balance=intbal;
intrate=rate;
}
void deposite(double amount)
{ 
if(amount>0)
{balance+=amount;
cout<<"Deposited:Rs. "<<amount<<endl;
}
}
void withdraw(double amount)
{
if(amount>0&&amount<=balance)
{balance-=amount;
cout<<"Withdrawn:Rs. "<<amount<<endl;
}
else
{
cout<<"Insufficient balance!"<<endl;
}
}
void applyInterest()
{
double interest=balance*intrate/100;
balance+=interest;
cout<<"Interest applied:Rs. "<<interest<<endl;
}
void display()
{
cout<<"\n[Saving ACC]"<<endl;
cout<<"Account Holder:"<<accholdername<<endl;
cout<<"Account Number:"<<accno<<endl;
cout<<"Balance:Rs. "<<balance<<endl;
cout<<"Interest Rate:"<<intrate<<endl;
}
};
class checkingacc
{private:
string accholdername;
int accno;
double balance;
double trans fee;//transcation fee

public:
checkingacc(string name,int accNo,double intbal,double fee)
{
accholdername=name;
accno=accNo;
balance=intbal;
trans fee=fee;
}
void deposite(double amount)
{ 
if(amount>0)
{balance+=amount;
cout<<"Deposited:Rs. "<<amount<<endl;
}
}
void withdraw(double amount)
{double total=amount+trans fee;
if(total<=balance)
{balance-=total;
cout<<"Withdrawn:Rs. "<<amount<<"(Rs. "<<trans fee<<"fee applied)"<<endl;
}
else
{
cout<<"Insufficient balancefor withdrawal+fee!"<<endl;
}
}
void display()
{
cout<<"\n[checking ACC]"<<endl;
cout<<"Account Holder:"<<accholdername<<endl;
cout<<"Account Number:"<<accno<<endl;
cout<<"Balance:Rs. "<<balance<<endl;
cout<<"Transaction fee:Rs."<<trans fee<<endl;
}
};

int main()
{
SavingAcc saving("Alice",101,5000.0,3.0);
CheckingAcc checking("Bob",102,1000.0,20.0);
svaing.display();
saving.deposite(1000);
saving.withdraw(2000);
saving.applyinetrest();
saving.display();

checking.display();
checking.deposite(1500);
checking.withdraw(100);
checking.display();

return 0;
}

