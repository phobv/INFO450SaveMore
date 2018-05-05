#pragma once
#include "stdafx.h"
#include "BankAccount.h"

class CheckingAccount :public BankAccount
{
private:
	const double LOWBALANCE=5.00;
	const double ORDERCHECK=15.00;
public:
	CheckingAccount(int aN, double iR, double b);
	double withdraw(double w);
	int orderCheck();
	void checkBalance();
};