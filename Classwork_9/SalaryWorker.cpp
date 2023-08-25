#include "SalaryWorker.h"

// Base constructor
SalaryWorker::SalaryWorker()
{
	salary = 0;
	bonus = 0;
}

// Initialization constructor
SalaryWorker::SalaryWorker(double salary, double bonus, string firstName, string lastName) : Employee(firstName, lastName)
{
	this->salary = salary;
	this->bonus = bonus;
}

// Calculate Salary and called the function from "SalesMan" class
double SalaryWorker::calculateSalary()
{
	return calculateBonus() + salary;
}

// Setters
void SalaryWorker::setSalary(double salary)
{
	this->salary = salary;
}

void SalaryWorker::setBonus(double bonus)
{
	this->bonus = bonus;
}


// Getters
double SalaryWorker::getSalary()
{
	return salary;
}

double SalaryWorker::getBonus()
{
	return bonus;
}