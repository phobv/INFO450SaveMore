#include "stdafx.h"
#include "BankAccount.h"
#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(int aN, double iR, double b) :BankAccount(aN, iR, b)
{

}

double CheckingAccount::withdraw(double w)
//Checks to see if 
{
	if((balance - w) > 0)
	{
		balance -= w;
		checkBalance();
		return 0;
	}

	else if ((balance - w) < 0)
	{
		return -1;
	}

}

int CheckingAccount::orderCheck()
{
	if (balance > ORDERCHECK)
	{
		balance -= ORDERCHECK;

		checkBalance();
		return 0;
	}
	else if (balance < ORDERCHECK)
	{
		return -1;
	}
}

void CheckingAccount::checkBalance()
{
	if (balance < 500)
	{
		balance -= LOWBALANCE;
	}
}