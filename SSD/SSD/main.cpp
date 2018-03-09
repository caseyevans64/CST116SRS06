#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "samplesd.h"
#include "calculate_ssd.h"

int main()
{
	//my data
	int ranvalues[] = { 62,51,10,21,42,30,54,76,78,23,68,28,70,33,71,82,28,98,35 };

	//rolando's data 
	int partnersdata[] = {12, 23, 34, 1, 5, 23, 9, 10, 22, 11, 21, 13, 10, 2, 4, 7, 6, 8, 14, 31, 20, 15, 45, 5, 8
};
	double sd1 = samplesd(sizeof ranvalues / sizeof ranvalues[0], ranvalues);
	double sd2 = calculate_ssd(sizeof ranvalues / sizeof ranvalues[0], ranvalues);
	
	double sd3 = samplesd(sizeof partnersdata / sizeof partnersdata[0], partnersdata);
	double sd4 = calculate_ssd(sizeof partnersdata / sizeof partnersdata[0], partnersdata);

	if (abs(sd1 - sd2) <= 0.0001)
	{
		std::cout << "They match" << std::endl;
	}
	else
	{
		std::cout << "They don't match" << std::endl; 
	}
	return 0;
}