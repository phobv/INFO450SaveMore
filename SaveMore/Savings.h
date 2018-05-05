#pragma once
#include "stdafx.h"
#include "BankAccount.h"


class Savings :public BankAccount
{
private:
//Annual Percentage Rate under 10,000
	const double APRONE = 0.01;
//Annual Percentage Rate >= 10,000
	const double APRTWO = 0.02;
	const double FEE = 2.00;
public:
	Savings(int aN,  double b);
	double withdraw(double w);
	double deposit(double d);
	void AssessInterest();
};