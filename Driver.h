#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include "Trip.h"
using namespace std;
class Driver : public Trip {
private:
 string name;
 int licenseNo;
 double Salary;
 int Age;
public:
 //set values 
 Driver(string Dname, int licNo, double salary, int age)
 {
 name = Dname;
 licenseNo = licNo;
 Salary = salary;
 Age = age;
 }
 //displaying details 
 void displaydriverDetails()
 {
 cout << "============================" << endl;
 cout << "Driver Name : " << name << endl;
 cout << "Driver License : " << licenseNo << endl;
 cout << "Salary: " << Salary << endl;
 cout << "Age: " << Age << endl;
 cout << "============================" << endl;
 }
 //deconstructors 
 ~Driver()
 {
 cout << "deleting Driver" << endl;
 }
};
