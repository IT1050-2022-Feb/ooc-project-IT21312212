#include <iostream> 
#include <string> 
#include "Accomodation.h" 
#include "Account.h" 
#include "Cart.h" 
#include "Details.h" 
#include "Driver.h" 
#include "Employee.h" 
#include "feedback.h" 
#include "IT_Staff.h" 
#include "Package.h" 
#include "Payment.h" 
#include "Registerd_User.h" 
#include "Report.h" 
#include "Resevation.h" 
#include "selectpackage.h" 
#include "Trip.h" 
#include "Vehicle.h"
using namespace std;

int main()
{
  //Accomodation Class object creation 
    Accomodation acmo1, acmo2;

    acmo1.setValues("10/05/2022", "Non Veg food", 5, "2 days");
    acmo2.setValues("15/05/2022", "Veg food", 10, "3 days");

    acmo1.displayAccomodation();
    cout << endl;
    acmo2.displayAccomodation();

  //Account Class object cretion 
    Account acc1, acc2;

    acc1.setDetails("Janidu", 1, "Janidu+dushan@gmail.com", 1, "JD123", "Ilovedushan", "01/05/2022");
    acc2.setDetails("Devanji", 2, "Devanji+kaluputha@gmail.com", 2, "DK456", "Kaluputha@001", "02/05/2022");

    acc1.displayAccDetails();
    acc2.displayAccDetails();

    acc1.~Account();
    acc2.~Account();

  //Cart Class object creation
    Package* pkg10 = new Package;
    Package* pkg20 = new Package;
  
    Cart* crt1 = new Cart();
    Cart* crt2 = new Cart();
  
    crt1->setNoOfItems(2);
    crt2->setNoOfItems(3);
  
    crt1->displayPackageDetails(pkg10);
    crt2->displayPackageDetails(pkg20);

  //Objects not created for Details class becuase it is a parent class of inheritance

  //Driver Class object creation 
    Driver* Dvr1 = new Driver("Sena", 234567, 20000, 24);
    Dvr1->displaydriverDetails();
  
    Driver* Dvr2 = new Driver("Bandara", 897641, 21500, 56);
    Dvr2->displaydriverDetails();
  
    delete Dvr1;
    delete Dvr2;
  
  //Objects not created for Employee class becuase it is a parent class of inheritance

  //Feedback Class object creation 
    Feedback fb1, fb2;

    fb1.displayFeedbackMsg();
    fb2.displayFeedbackMsg();

  //IT_Staff Class object creation 
    ITStaff* IT1 = new ITStaff("Dega", "hdg953403", 00231, "Janith", 01, "HR");
    IT1->displayDetails(); 
  
    ITStaff* IT2 = new ITStaff("Jana", "tyur758439", 00231, "Sumudu", 02, "IT");
    IT2->displayDetails();
    delete IT1;
    delete IT2;

  //Package Class object creation
    Package pkg1("P001", "Gold", 1500.00);
    Package pkg2("P002", "Premium", 2000.00);
  
    pkg1.displayDtails();
    pkg2.displayDtails();
  
    pkg1.~Package();
    pkg2.~Package();

  //Payment Class object creation
    Payment* P1 = new Payment(1012, "Credit card", "03-04-2022", 25000.00, "Gold");
    Payment* P2 = new Payment(1015, "Credit card", "07-04-2022", 35000.00,
"Silver");
  
    P1->displayPaymentDetails();
    P2->displayPaymentDetails();
    cout << "*******" << endl;
  
    delete P1;
    delete P2;
  
  //Registerd_User Class object creation 
    Feedback* fdb1 = new Feedback;
    Feedback* fdb2 = new Feedback;
  
    Registered_User* reg_user1 = new Registered_User("Devanja", 1, "vali@gamil.com", 
"04/07/2000", "Female", "No21 valivita rd,malabe", "null");
    reg_user1->giveFeedback(fdb1);
    reg_user1->displayDetails();
    reg_user1 -> ~Registered_User();
    
    Registered_User* reg_user2 = new Registered_User("Bandara", 1, 
"devkaluR@gamil.com", "21/07/2000", "Male", "No88 vihara rd,malabe", "null");
    reg_user2->giveFeedback(fdb2);
    reg_user2->displayDetails();
    delete reg_user2;

  //Report Class object creation
    Report* r1 = new Report(1, "Sales", "Word doc", "03-07-2022");
    Report* r2 = new Report(2, "vehicle", "PDF", "04-07-2022");
  
    r1->displayReport();
    r2->displayReport();
  
    cout << "******" << endl;

  //Resevation Class object creation 
    Payment* pay1 = new Payment;
    Trip* tr1 = new Trip;
  
    Reservation* resev1 = new Reservation("001", "07/02/2022");
    resev1->setAmount(pay1);
    resev1->setId(tr1);
    resev1->diplayReservation();
    delete resev1;
  
    Payment* pay2 = new Payment;
    Trip* tr2 = new Trip;
    Reservation* resev2 = new Reservation("002", "09/05/2022");
    resev2->setAmount(pay2);
    resev2->setId(tr2);
    resev2->diplayReservation();
    delete resev2;

  //did not create objects because Selectpackage is a association class

  //Objects not created for Trip class becuase it is a parent class of inheritance
  
  //Vehile Class object creation 
    Vehicle* Vehi1 = new Vehicle(23, "A001");
    Vehi1->displayDetails();
    delete Vehi1;
  
    Vehicle* Vehi2 = new Vehicle(24, "A002");
    Vehi2->displayDetails();
    delete Vehi2;

  return 0;
}