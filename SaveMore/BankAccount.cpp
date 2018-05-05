#include "stdafx.h"
#include "BankAccount.h"
#include <iostream>
using namespace std;



BankAccount::BankAccount(int aN, double iR, double b)
{
	accountNumber = aN;
	interestRate = iR;
	balance = b;

}

double BankAccount::withdraw(double w)
{
	if ((balance - w) < 0)
	{
		return -1;
	}
	else if ((balance - w) > 0)
	{
		balance -= w;
		return 0;
	}

}

double BankAccount::deposit(double d)
{
	if (d < 0)
	{
		
		return -1;
	}
	else if (d >= 0)
	{
		balance += d;
		return 0;
	}
}

void BankAccount::display()
{
	cout << "Account Number: " << accountNumber << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Interest Rate: " << interestRate << endl;
}