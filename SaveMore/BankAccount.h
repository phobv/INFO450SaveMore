#pragma once
#include "stdafx.h"

class BankAccount
{
protected: int accountNumber;
		   double interestRate;
		   double balance;
public:
	BankAccount(int aN, double iR, double b);
	double withdraw(double w);
	double deposit(double d);
	void display();
};