#pragma once
#include <iostream>
using namespace std;


#include "Employee.h"
class SalaryWorker :
    public Employee
{
private:
    double salary;
    double bonus;

public:
    SalaryWorker();
    SalaryWorker(double salary, double bonus, string firstName, string lastName);


    double calculateSalary() override;
    virtual double calculateBonus() = 0;
    


    void setSalary(double salary);
    void setBonus(double bonus);

    double getSalary();
    double getBonus();
};

