/**
 *    @file: prog5.cc
 *  @author: Josh Marusek
 *    @date: 2021-09-10
 *   @brief: From lab 3; converts between Celsius and Fahrenheit and vice-versa.
 *  
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   int fah = 56;  // declare and initialize at the same time - page 48
   int cel = 20;

   ctof = 9.0/5 * cel + 32;
   ftoc = 5.0/9 * (fah - 32);

   cout << fixed << setprecision(1);
   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << endl;

   return (EXIT_SUCCESS);
}
