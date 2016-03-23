#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

int Employee::numberOfEmployees = 0;

Employee::Employee()
{
}

Employee::~Employee()
{
	numberOfEmployees--;
}

SalaryEmployee::SalaryEmployee() {

	empName = "Monthly";
	employeeNum = 0;
	numberOfEmployees++;
	empSalary = 0.00;
}

SalaryEmployee::SalaryEmployee(string name, int number)
{
	empName = name;

	if (number >= 0) {
		employeeNum = number;
	}
	else
	{
		cout << "Invalid Staff Number input. Ensure a positive number now" << endl;
		cin >> employeeNum;
	}

	numberOfEmployees++;
	empSalary = 0.00;
}

SalaryEmployee::~SalaryEmployee() {
	numberOfEmployees--;
}

float SalaryEmployee::setSalary(const float salary) {
	monthlySalary = salary;
	return monthlySalary;
}

float SalaryEmployee::salary() {
	return monthlySalary;
}

string SalaryEmployee::name() {
	return empName;
}

int SalaryEmployee::staffNumber() {
	return employeeNum;
}

HourlyEmployee::HourlyEmployee() {
	empName = "Hourly";
	employeeNum = 0;
	numberOfEmployees++;
	empSalary = 0.00;
}

HourlyEmployee::HourlyEmployee(string name, int number)
{
	empName = name;

	if (number >= 0) {
		employeeNum = number;
	}
	else
	{
		cout << "Invalid Staff Number input. Ensure a positive number now" << endl;
		cin >> employeeNum;
	}

	numberOfEmployees++;
	empSalary = 0.00;
}

HourlyEmployee::~HourlyEmployee()
{
	numberOfEmployees--;
}

float HourlyEmployee::setHourlyRate(float hourlyPay)
{
	hourlySalary = hourlyPay;
	return hourlySalary;
}

int HourlyEmployee::setHoursWorked(int hours)
{
	hoursWorked = hours;
	return hoursWorked;
}

float HourlyEmployee::salary()
{
	empSalary = hourlySalary*hoursWorked;
	return empSalary;
}

string HourlyEmployee::name()
{
	return empName;
}

int HourlyEmployee::staffNumber()
{
	return employeeNum;
}

CommissionEmployee::CommissionEmployee()
{
	empName = "Commission";
	employeeNum = 0;
	numberOfEmployees++;
	empSalary = 0.00;
}

CommissionEmployee::CommissionEmployee(string name, int number)
{
	empName = name;

	if (number >= 0) {
		employeeNum = number;
	}
	else
	{
		cout << "Invalid Staff Number input. Ensure a positive number now" << endl;
		cin >> employeeNum;
	}

	numberOfEmployees++;
	empSalary = 0.00;
}

CommissionEmployee::~CommissionEmployee() {
	numberOfEmployees--;
}

float CommissionEmployee::setBaseSalary(float base)
{
	baseSalary = base;
	return baseSalary;
}

float CommissionEmployee::setRate(float rate)
{
	commRate = rate; 
	return commRate;
}

float CommissionEmployee::setRevenue(float revenue)
{
	revGenerated = revenue;
	return revGenerated;
}

float CommissionEmployee::salary()
{
	empSalary = baseSalary + commRate*revGenerated;
	return empSalary;
}

string CommissionEmployee::name()
{
	return empName;
}

int CommissionEmployee::staffNumber()
{
	return employeeNum;
}