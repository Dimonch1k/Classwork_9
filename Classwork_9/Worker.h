#pragma once
#include <iostream>
using namespace std;


#include "Employee.h"
class Worker :
    public Employee
{
private:
    int hoursNumbers;
    int hourlyRate;

public:
    Worker();
    Worker(int hoursNumbers, int hourlyRate, string firstName, string lastName);

    double calculateSalary();
    void display() override;


    void setHoursNumbers(int hoursNumbers);
    void setHourlyRate(int hourlyRate);

    int getHoursNumbers();
    int getHourlyRate();
};

