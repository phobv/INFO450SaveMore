#pragma once
#include "stdafx.h"
#include "BankAccount.h"

class CheckingAccount :public BankAccount
{
private:
//if balance is below 500
	const double LOWBALANCE=5.00;
//ordering checks will be 15 dollars
	const double ORDERCHECK=15.00;
public:
	CheckingAccount(int aN, double b);
	double withdraw(double w);
	int orderCheck();
	void checkBalance();
};