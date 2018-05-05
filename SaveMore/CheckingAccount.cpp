#include "stdafx.h"
#include "BankAccount.h"
#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(int aN,  double b) :BankAccount(aN, b)
{
//Interest Rate set to 0 cause it doesnt apply to Checking Account
	interestRate = 0;
}

//Withdraw function takes out money from the checking account
double CheckingAccount::withdraw(double w)

{
	if((balance - w) > 0)
	{
		balance -= w;
		checkBalance();
		
	}

	else if ((balance - w) < 0)
	{
		return -1;
	}
	return 0;
}

// Orders check and takes out 15 dollar from balance
int CheckingAccount::orderCheck()
{
	if (balance > ORDERCHECK)
	{
		balance -= ORDERCHECK;

		checkBalance();
		
	}
	else if (balance < ORDERCHECK)
	{
		return -1;
	}
	return 0;
}

void CheckingAccount::checkBalance()
{
	if (balance < 500)
	{
		balance -= LOWBALANCE;
	}
}