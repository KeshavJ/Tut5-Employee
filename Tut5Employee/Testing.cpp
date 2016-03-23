#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main()
{
	float totalSalary;

	

	SalaryEmployee *salary1 = new SalaryEmployee("Keshav", 213508238);
	HourlyEmployee *hourly1 = new HourlyEmployee("Lushen", 213067836);
	CommissionEmployee *commission1 = new CommissionEmployee("Thegan", 213500626);

	cout << salary1->name() << " is a monthly employee with no: " << salary1->staffNumber() << endl;
	cout << hourly1->name() << " is a hourly employee with no: " << hourly1->staffNumber() << endl;
	cout << commission1->name() << " is a commission employee with no: " << commission1->staffNumber() << endl;

	cout << "Number of Employees are: " << Employee::numberOfEmployees << endl;  

	Employee *empPtr[3];  

	salary1->setSalary(1500.50);


	hourly1->setHourlyRate(480.50);
	hourly1->setHoursWorked(24);

	commission1->setBaseSalary(7500.20);
	commission1->setRate(0.51);
	commission1->setRevenue(145875.50);

	
	empPtr[0] = salary1; 
	empPtr[1] = hourly1;  
	empPtr[2] = commission1; 

					
	cout << endl;
	cout << salary1->name() << " monthly salary is: R" << empPtr[0]->salary() << endl;
	cout << hourly1->name() << " monthly salary is: R" << empPtr[1]->salary() << endl;
	cout << commission1->name() << " monthly salary is: R" << empPtr[2]->salary() << endl;
	cout << endl;

	totalSalary = empPtr[0]->salary() + empPtr[1]->salary() + empPtr[2]->salary();
	cout << "Total Salary for All Employees is: R" << totalSalary << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		cout << empPtr[i]->name() << " has been fired" << endl;
		delete empPtr[i];  
		cout << "Employee count: " << Employee::numberOfEmployees << endl;
	}
	return 0;
}