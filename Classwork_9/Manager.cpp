#include "Manager.h"


Manager::Manager()
{
	clientCount = 0;
}

Manager::Manager(int clientCount, double salary, double bonus, string firstName, string lastName) : SalaryWorker(salary, bonus, firstName, lastName)
{
	this->clientCount = clientCount;
}


double Manager::calculateBonus()
{
	if (getClientCount() > 100 && getClientCount() < 201)
	{
		return getBonus() * 2;
	}

	else if (getClientCount() > 200)
	{
		return getBonus() * 3;
	}
	return getBonus();
}

void Manager::display()
{
	cout << "Salary: " << getSalary() << "\n";
	cout << "Bonus: " << getBonus() << "\n";
	cout << "Client count: " << getClientCount() << "\n";
	cout << "Month salary: " << calculateSalary() << "\n\n\n";
}


void Manager::setClientCount(int clientCount)
{
	this->clientCount = clientCount;
}

int Manager::getClientCount()
{
	return clientCount;
}