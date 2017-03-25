#include "Account.h"

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{		
}

Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;	
	//TODO: Add a message to the log
	std::string message;
	message += "Balance increased by " + std::to_string(_balanceInPennies);
	message += " pennies.";
	_log.push_back(message);

}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	//TODO: Add a message to the log
	std::string message;
	message += "Balance decreased by " + std::to_string(_balanceInPennies);
	message += " pennies.";
	_log.push_back(message);
}

int Account::getBalance()
{
	return 0;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

std::string Account::getCustomerFullName()
{
	std::string message = _accountOwner.getFullName();
	return message;
}