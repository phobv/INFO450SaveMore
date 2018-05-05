#include "stdafx.h"
#include "BankAccount.h"
#include <iostream>
using namespace std;

//constructor 

BankAccount::BankAccount(int aN, double b)
{
	accountNumber = aN;

	balance = b;

}

//withdraw function returns error if less than 0
double BankAccount::withdraw(double w)
{
	if ((balance - w) < 0)
	{
		return -1;
	}
	else if ((balance - w) > 0)
	{
		balance -= w;
		
	}
	return 0;
}

// deposit function
double BankAccount::deposit(double d)
{
	if (d < 0)
	{
		
		return -1;
	}
	else if (d >= 0)
	{
		balance += d;
		
	}
	return 0;
}
//dispay function displays account number, account balance, and Interest Rate
void BankAccount::display()
{
	cout << "Account Number: " << accountNumber << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Interest Rate: " << interestRate << endl;
}

void BankAccount::assessInterest()
{

}

int BankAccount::orderCheck()
{
	return -1;
}