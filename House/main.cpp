/*
 * File: main.cpp
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Driver for this project.  (Note: in C++, the compiler will not yell
 *                   at you if the name of the file is different from the name of a the
 *                   class (or in this case function).
 *
 * Build & Run Instructions
 * - - - - - - - - - - - - - - - - - -
 * "g++ House.cpp main.cpp"
 * "./a.out"
 * OR:
 * "g++ -o house.exe House.cpp main.cpp"
 * "./house.exe"
 * - - - - - - - - - - - - - - - - - -
 * 
 * Created: 05/15/2015
 */

#include <iostream>
//#include <cstdlib>

#include "House.h"

using namespace std;
/* if we did not have this, any functions/methods we used from namespace std would have to begin with that,
 * i.e., std::cout << "hello world" << std::endl;
 */

int main(int argc, char **argv)
{
    cout << "Beginning program..." << endl;
  

    /*
    House* house_1 = new House();
    cout << "house_1's color: " << house_1->getColor() << endl;
    house_1->setColor("Blue");
    cout << "house_1's color: " << house_1->getColor() << endl;
    */
    ///*
    House house_1;
    cout << "house_1's color: " << house_1.getColor() << endl; 
    house_1.setColor("Blue");
    cout << "house_1's color: " << house_1.getColor() << endl;
    //*/

    cout << "Successfully reached the end of the program.  Bye!" << endl;
    
    //return EXIT_SUCCESS;
    return 0;
}
