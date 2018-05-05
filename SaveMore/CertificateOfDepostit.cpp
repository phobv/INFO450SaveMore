#include "stdafx.h"
#include "BankAccount.h"
#include "CertificateOfDeposit.h"
#include <iostream>
using namespace std;
//constructor
CertificateOfDeposit::CertificateOfDeposit(int term, int aN,double b) :BankAccount(aN,b)
{
	if (term < 5)
	{
		interestRate = LOWERRATE;
	}
	else if (term > 4)
	{
		interestRate = FIVEYEARTERM;
	}
}
//takes the interest with term applied to it and divides by 12(for 12 months)
void CertificateOfDeposit::assessInterest()
{
	balance += (balance*(interestRate) / 12);
}