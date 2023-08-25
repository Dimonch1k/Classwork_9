#pragma once
#include <iostream>
using namespace std;


#include "SalaryWorker.h"
class Manager :
    public SalaryWorker
{
private:
    int clientCount;

public:
    Manager();
    Manager(int clientCount, double salary, double bonus, string firstName, string lastName);



    double calculateBonus() override;
    void display() override;

    void setClientCount(int clientCount);
    int getClientCount();
};

