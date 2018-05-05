#pragma once
#include "stdafx.h"
#include "BankAccount.h"

class CertificateOfDeposit :public BankAccount
{
	
	private:
	//earns 10% with a 5 year term	
		const double FIVEYEARTERM = 0.10;
   //earn 5% if anything less
		const double LOWERRATE = 0.05;
		int term;
	public:
		//constructor
		CertificateOfDeposit(int term, int aN,  double b);
		void assessInterest();


	
};