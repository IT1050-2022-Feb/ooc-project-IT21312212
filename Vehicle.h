#pragma once
#include "Driver.h"
#include <iostream>
#include <string>
using namespace std;
class Vehicle {
private:
 int VehicleID;
 string RegNO;
 Driver* drv[2];
public:
 Vehicle()
 {
 VehicleID = 0;
 RegNO = "000";
 }
 //set values 
 Vehicle(int vehicleID, string regNo)
 {
 VehicleID = vehicleID;
 RegNO = regNo;
 }
 void setVehicleDetails(int vehicleID, string regNo) {
 VehicleID = vehicleID;
 RegNO = regNo;
 }
 //displaying details 
 void displayDetails()
 {
 cout << "============================" << endl;
 cout << " Vehicle ID Number : " << VehicleID << endl;
 cout << " Register Number : " << RegNO << endl;
 cout << "============================" << endl;
 }
 ~Vehicle()
 {
 cout << "Deleting Vehicle" << endl;
 }
};
