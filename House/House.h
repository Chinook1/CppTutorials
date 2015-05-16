/*
 * File: House.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Simple example of classes in C++
 *
 * Created 05/16/2015
 */

#ifndef HOUSE_H
#define HOUSE_H

#include <string>

using namespace std;

class House
{
    private:
        string color;
        int numOfWindows;

    public:
        House();
    	//void setColor(string color);
	//void setColor(string);
	void setColor(string myColor);
	string getColor();
	//void setNumOfWindows(int numOfWindows);
	void setNumOfWindows(int);
	void setNumOfWindow(int myNumOfWindows);
	int getNumOfWindows();
        ~House();
};

#endif /* HOUSE_H */
