#pragma once
#include <iostream>
using namespace std;

#include "SalaryWorker.h"
class SalesMan :
    public SalaryWorker
{
private:
    int planPersentage;

public:
    SalesMan();
    SalesMan(int planPersentage, double salary, double bonus, string firstName, string lastName);

    double calculateBonus() override;
    void display() override;

    void setPlanPersentage(int planPersentage);
    int getPlanPersentage();
};

