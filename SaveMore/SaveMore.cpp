// SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include "BankAccount.h"
#include "CheckingAccount.h"
#include "Savings.h"
#include "CertificateOfDeposit.h"
#include <iostream>
using namespace std;


int main()
{
	
	int inputAcctNumber = NULL, term = NULL;

	double inputAcctBalance = NULL, inputDeposit = NULL, inputWithdraw = NULL;
	
	char answer;

	//base class pointers 
	BankAccount *savingAccount = NULL;
	BankAccount *checkingAccount = NULL;
	BankAccount *CoD = NULL;

	//Provides Instructions
	cout << "You will be asked to provide infromation for a " << endl;
	cout << "Savings Account, Checking Account, and a Certificate of Deposit ";
	cout << "Account." << endl;
	cout << endl;
	cout << "==============================================================" << endl;

	//Input Savings Account Information
	cout << "Savings Account Information" << endl;
	cout << endl;
	cout << "Enter Saving Account Number: ";
	cin >> inputAcctNumber;
	cout << endl;
	do
	{
		cout << "Enter the balance for your Savings Account: ";
		cin >> inputAcctBalance;
		if (inputAcctBalance < 0)
		{
			cout << "Balance cannot be less than 0" << endl;
		}
	} while (inputAcctBalance < 0);
	savingAccount = new Savings(inputAcctNumber, inputAcctBalance);
	cout << endl;
	

	//Input Checking Account Information
	cout << "Checking Account Information" << endl;
	cout << endl;
	cout << "Enter Checking Account Number: ";
	cin >> inputAcctNumber;
	cout << endl;
	do
	{
		cout << "Enter the balance for your Checking Account: ";
		cin >> inputAcctBalance;
		if (inputAcctBalance < 0)
		{
			cout << "Balance cannot be less than 0" << endl;
		}
	} while (inputAcctBalance < 0);
	checkingAccount = new CheckingAccount(inputAcctNumber, inputAcctBalance);
	cout << endl;
	

	//input Certificate Of Deposit Information
	cout << "Certificate of Deposit Account Information" << endl;
	cout << endl;
	cout << "Enter Certificate Account Number: ";
	cin >> inputAcctNumber;
	cout << endl;
	do
	{
		cout << "Enter the balance for Certificate Account: ";
		cin >> inputAcctBalance;
		if (inputAcctBalance < 0)
		{
			cout << "Balance cannot be less than 0" << endl;
		}
	} while (inputAcctBalance < 0);
	cout << endl;
	cout << "==============================================================" << endl;


	//input the amount of terms
	cout << "Please enter the years in the term for certificate account: ";
	cin >> term;
	CoD = new CertificateOfDeposit(term, inputAcctNumber, inputAcctBalance);
	cout << endl;



	
	cout <<   endl;
	cout << "==============================================================" << endl;

	cout << "Enter deposit amount for Savings: ";
	cin >> inputDeposit;
    
	savingAccount->deposit(inputDeposit);
	cout << endl;
	cout << endl;


	cout << "Please enter deposit amount for Checking: ";
	cin >> inputDeposit;
    checkingAccount->deposit(inputDeposit);
	cout << endl;
	cout << endl;

	cout << "Please enter deposit amount for Certificate: ";
	cin >> inputDeposit;
	
	cout << endl;
	cout << "==============================================================" << endl;
	cout << endl;
	//input withdrawl amount
	
	cout << "Enter withdrawal amount for Savings account" << endl;
	cout << "(note automatic fee of $2 will be applied): ";
	cin >> inputWithdraw;
	savingAccount->withdraw(inputWithdraw);
	cout << endl;
	cout << "Please enter withdrawal amount for Checking: ";
	cin >> inputWithdraw;
	checkingAccount->withdraw(inputWithdraw);
	cout << endl;
	cout << "Please enter withdrawal amount Certifcate: ";
	cin >> inputWithdraw;
	CoD->withdraw(inputWithdraw);
	cout << endl;
	cout << "==============================================================" << endl;

	//lets the user order checks
	
	cout << "Would you like to order checks for checking account?" << endl;
	cout << "enter y or Y for yes: ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
		checkingAccount->orderCheck();
	cout << endl;

	cout << "==============================================================" << endl;

	//prints display 
	cout << "Savings account info:" << endl;
	savingAccount->display();
	cout << endl;
	cout << "==============================================================" << endl;
	cout << "Checking account info:" << endl;
	checkingAccount->display();
	cout << endl;
	cout << "==============================================================" << endl;
	cout << "Certificate account info:" << endl;
	CoD->display();

	//frees up memory 
	delete savingAccount;
	delete checkingAccount;
	delete CoD;

	return 0;
}

