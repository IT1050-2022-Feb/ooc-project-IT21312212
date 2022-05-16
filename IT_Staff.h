#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
class ITStaff :public Employee
{
private:
 string Username;
 string Password;
public:
 int getEmployeeID()
 {
 return employeeId;
 }
 //Constructor 
 ITStaff(string Uname, string ppassword, int pID, string PName, int DNo, string
Dname)
 {
 Username = Uname;
 Password = ppassword;
 employeeId = pID;
 employeeName = PName;
 departmentNo = DNo;
 departmentName = Dname;
 }
 //Destructor 
 ~ITStaff()
 {
 cout << "Deleted Successfully" << endl;
 }
 void displayDetails()
 {
 cout << " ITStaff Account Details" << endl;
 cout << "@====================================@" << endl;
 cout << "USERNAME \t" << Username << endl;
 cout << "PASSWORD \t" << Password << endl;
 cout << "Employee ID \t" << employeeId << endl;
 cout << "Employeee Name \t" << employeeName << endl;
 cout << "Department Number \t" << departmentNo << endl;
 cout << "Department Name \t" << departmentName << endl;
 cout << "@====================================@" << endl;
 }
 void setDetails(string Uname, string password)
{
 Username = Uname;
 Password = password;
 }
};