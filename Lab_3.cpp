#include <iostream>
using namespace std;

int  main()
{
   int wattRating1, wattRating2, wattRating3;
   cout << "Please enter the Watt ratings of three energy consuming appliances in your home." << endl
      << "First appliance: ";
   cin >> wattRating1;
   cout << "Second appliance: ";
   cin >> wattRating2;
   cout << "Third appliance: ";
   cin >> wattRating3;

   if (wattRating1 < 0 || wattRating2 < 0 || wattRating3 < 0)
   {
      cout << "\nSorry, you entered a negative Watt rating; this program cannot continue." << endl;
      return 1;
   }

   int hrsPerDay1, hrsPerDay2, hrsPerDay3;
   cout << "\nNow, enter how many hours per day each item consumes electricity." << endl
      << "\nFirst appliance: ";
   cin >> hrsPerDay1;
   cout << "Second appliance: ";
   cin >> hrsPerDay2;
   cout << "Third appliance: ";
   cin >> hrsPerDay3;

   if (hrsPerDay1 < 0 || hrsPerDay2 < 0 || hrsPerDay3 < 0)
   {
      cout << "\nSorry, you entered a negative time value; this program cannot continue." << endl;
      return 1;
   }

   double const DOLLARS_PER_WH = 0.00008;
   
   //calculate Watt hours for the whole month
   int wattHrsMonth1 = wattRating1 * hrsPerDay1 * 30;
   int wattHrsMonth2 = wattRating2 * hrsPerDay2 * 30;
   int wattHrsMonth3 = wattRating3 * hrsPerDay3 * 30;
   int totalWHs = wattHrsMonth1 + wattHrsMonth2 + wattHrsMonth3;

   double monthBill = totalWHs * DOLLARS_PER_WH;

   cout << "\nYour company charges $" << DOLLARS_PER_WH << " per Watt hour." << endl << endl
      << "Your monthly electrical bill, in kiloWatt hours:" << endl
      << "Appliance #1: " << wattHrsMonth1/1000 << " kWh.   $" << wattHrsMonth1*DOLLARS_PER_WH << endl
      << "Appliance #2: " << wattHrsMonth2/1000 << " kWh.   $" << wattHrsMonth2*DOLLARS_PER_WH << endl
      << "Appliance #3: " << wattHrsMonth3/1000 << " kWh.   $" << wattHrsMonth3*DOLLARS_PER_WH << endl
      << "Total: " << totalWHs/1000 << " kWh.   $" << monthBill << endl << endl;

   return 0;
}

/*----------------OUTPUT------------------
RUN 1:
Please enter the Watt ratings of three energy consuming appliances in your home.

First appliance: 2000
Second appliance: 5400
Third appliance: -1200

Sorry, you entered a negative Watt rating; this program cannot continue.
Press any key to continue . . .

------------------------------------------
RUN 2:
Please enter the Watt ratings of three energy consuming appliances in your home.

First appliance: 2400
Second appliance: 7000
Third appliance: 2600

Now, enter how many hours per day each item consumes electricity.

First appliance: 5
Second appliance: -2
Third appliance: 9

Sorry, you entered a negative time value; this program cannot continue.
Press any key to continue . . .
------------------------------------------
RUN 3:
Please enter the Watt ratings of three energy consuming appliances in your home.

First appliance: 1500
Second appliance: 5000
Third appliance: 120

Now, enter how many hours per day each item consumes electricity.

First appliance: 2
Second appliance: 9
Third appliance: 12

Your company charges $8e-005 per Watt hour.

Your monthly electrical bill, in kiloWatt hours:
Appliance #1: 90 kWh.   $7.2
Appliance #2: 1350 kWh.   $108
Appliance #3: 43 kWh.   $3.456
Total: 1483 kWh.   $118.656

Press any key to continue . . .
----------------------------------*/