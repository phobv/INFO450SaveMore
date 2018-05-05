#pragma once
#include "stdafx.h"

class BankAccount
{
//allows access from other classes
protected: int accountNumber;
		   double interestRate;
		   double balance;
public:
//constructor for BankAccount class
	BankAccount(int aN, double b);
//withdraw and deposit functions are shared among other classes
	double withdraw(double w);
	double deposit(double d);
	void display();
	virtual void assessInterest();
	virtual int orderCheck();
};