// This program calculates your age in the year 2050.
// Input:  None
// Output: Your current age followed by your age in 2050

#include <iostream>
using namespace std;
int main()
{
   int myCurrentAge = 26;
   int myNewAge;
   int currentYear = 2018;
   const int YEAR = 2050;


   myNewAge = myCurrentAge + (YEAR - currentYear);

   cout << "My Current Age is " << myCurrentAge << endl;
   cout << "I will be " << myNewAge << " in " << YEAR << endl;
   cout << "Code by Jacob Smetana" << endl;

   return 0;
}
