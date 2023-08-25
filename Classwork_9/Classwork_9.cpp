#include <iostream>
using namespace std;


// Task 3

#include "Employee.h"
#include "Manager.h"
#include "SalaryWorker.h"
#include "SalesMan.h"
#include "Worker.h"





//////////////////////////////////////////////


// Task 1

/**/
int main()
{
	Employee* employees[7];

	employees[0] = new Worker(30, 10, "Kate", "Jordan");
	employees[1] = new Worker(50, 10, "Jack", "Peterson");
	employees[2] = new SalesMan(80, 800, 100, "Peter", "Brown");
	employees[3] = new SalesMan(150, 1000, 100, "Antony", "Norton");
	employees[4] = new Manager(50, 2000, 200, "David", "Flyyn");
	employees[5] = new Manager(120, 1800, 200, "Marian", "Wood");
	employees[6] = new Manager(250, 2200, 200, "Brent", "Simptson");



	// 1 Worker
	cout << employees[0]->getFirstName() << " " << employees[0]->getLastName() << endl;
	employees[0]->display();

	// 2 Worker
	cout << employees[1]->getFirstName() << " " << employees[1]->getLastName() << endl;
	employees[1]->display();

	// 1 Salesman
	cout << employees[2]->getFirstName() << " " << employees[2]->getLastName() << endl;
	employees[2]->display();

	// 2 Salesman
	cout << employees[3]->getFirstName() << " " << employees[3]->getLastName() << endl;
	employees[3]->display();

	// 1 Manager
	cout << employees[4]->getFirstName() << " " << employees[4]->getLastName() << endl;
	employees[4]->display();

	// 2 Manager
	cout << employees[5]->getFirstName() << " " << employees[5]->getLastName() << endl;
	employees[5]->display();

	// 3 Manager
	cout << employees[6]->getFirstName() << " " << employees[6]->getLastName() << endl;
	employees[6]->display();

}
