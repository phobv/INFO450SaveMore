#include "stdafx.h"
#include "Savings.h"
#include <iostream>
using namespace std;

//constructor
Savings::Savings(int aN,  double b) :BankAccount(aN,  b)
{
	AssessInterest();
}

double Savings::withdraw(double w)
{
	if ((balance - w- FEE) < 0)
	{
		return -1;
	}
	else if ((balance - w - FEE) > 0)
	{
		balance -= w;
		balance -= FEE;
		return 0;
	}

}

//add deposit to balance along with interest
double Savings::deposit(double d)
{
	if (d < 0)
	{

		return -1;
	}
	else if (d >= 0)
	{
		balance += d;
		AssessInterest();
		return 0;
	}
}

void Savings::AssessInterest()
{
	if (balance <= 10000)
	{
		interestRate = APRONE;
	}
	else if (balance >= 10000)
	{
		interestRate = APRTWO;
	}
	balance += (balance*(interestRate / 12));
}