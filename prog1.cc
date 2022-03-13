/**
 *    @file: prog1.cc
 *  @author: Josh Marusek
 *    @date: 2021-09-10
 *   @brief: From lab 3; does math with and compares two numbers.
 *  
 */


#include <iostream>
#include <cstdlib>

using namespace std;

const int INT1 = 15;
const int INT2 = 20;

int main()
{
    cout << "Sum of " << INT1 << " and " << INT2 << " is " << INT1 + INT2 << endl;
    cout << "Product is " << INT1 * INT2 << endl;
    if (INT1 < INT2)
        cout << INT2 << " is bigger" << endl;
    else
        cout << INT1 << " is bigger" << endl;
    
    return (EXIT_SUCCESS);
}
