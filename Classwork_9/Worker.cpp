#include "Worker.h"

// Base constructor
Worker::Worker()
{
	hoursNumbers = 0;
	hourlyRate = 0;
}

// Initialization constructor
Worker::Worker(int hoursNumbers, int hourlyRate, string firstName, string lastName) : Employee(firstName, lastName)
{
	this->hoursNumbers = hoursNumbers;
	this->hourlyRate = hourlyRate;
}


// Calculate Worker Salary
double Worker::calculateSalary()
{
	if (getHoursNumbers() > 40)
	{
		int toForty = 40 * hourlyRate;
		int afterForty = ((getHoursNumbers() - 40) * hourlyRate) * 2;

		return toForty + afterForty;
	}
	return hoursNumbers * hourlyRate;
}

// Display all parametrs about worker
void Worker::display()
{
	cout << "Hours numbers: " << hoursNumbers;
	cout << "\nHourly rate: " << hourlyRate << "\n";
	cout << "Month salary: " << calculateSalary() << "\n\n\n";
}


// Setters
void Worker::setHoursNumbers(int hoursNumbers)
{
	this->hoursNumbers = hoursNumbers;
}

void Worker::setHourlyRate(int hourlyRate)
{
	this->hourlyRate = hourlyRate;
}


// Getters
int Worker::getHoursNumbers()
{
	return hoursNumbers;
}

int Worker::getHourlyRate()
{
	return hourlyRate;
}