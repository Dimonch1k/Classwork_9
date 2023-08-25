#include "SalesMan.h"

// Base constructor
SalesMan::SalesMan()
{
	planPersentage = 0;
}

// Initialization constructor
SalesMan::SalesMan(int planPersentage, double salary, double bonus, string firstName, string lastName) : SalaryWorker(salary, bonus, firstName, lastName)
{
	this->planPersentage = planPersentage;
}


// Calculate Bonus
double SalesMan::calculateBonus()
{
	double sBonus = getBonus() * planPersentage / 100;
	setBonus(sBonus);
	return getBonus();
}

// Display all parametrs about sales man
void SalesMan::display()
{
	cout << "Salary: " << getSalary() << "\n";
	cout << "Bonus: " << getBonus() << "\n";
	cout << "Plan persentage: " << planPersentage << "\n";
	cout << "Month salary: " << calculateSalary() << "\n\n\n";
}


// Setter
void SalesMan::setPlanPersentage(int planPersentage)
{
	this->planPersentage = planPersentage;
}

// Getter
int SalesMan::getPlanPersentage()
{
	return planPersentage;
}