#pragma once
#include "stdafx.h"
#include "BankAccount.h"


class Savings :public BankAccount
{
private:
	const double APRONE = 0.01;
	const double APRTWO = 0.02;
	const double FEE = 2.00;
public:
	Savings(int aN, double iR, double b);
	double withdraw(double w);
	double deposit(double d);
	void AssessInterest();
};