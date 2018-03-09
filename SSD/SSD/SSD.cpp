
#include "stdafx.h"
#include <cmath>
#include "samplesd.h"

double samplesd(const size_t n, const int ranvalues[])
{
	int sum{ 0 };
	double mean = 0.0; 

	for (int z = 0; z < n; ++z)
	{
		sum += ranvalues[z];
	}

	mean = (sum*1.0) / n;

	double sumofsquares { 0.0 };
	double  sumofdiff { 0.0 };
	for (int z = 0; z < n; z++)
	{
		double sumofdiff { ranvalues[z] - mean };
		double sumofdiffsquares{ sumofdiff*sumofdiff };
		sumofsquares += sumofdiffsquares;
	}

	double s = (sumofsquares / (n-1)); //number of variables-1

	double sd = sqrt(s);

	return sd;
}


