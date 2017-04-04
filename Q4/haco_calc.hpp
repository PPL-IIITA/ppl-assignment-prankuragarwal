#ifndef HALO_CALC_HPP
#define HALO_CALC_HPP
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
#include <limits.h>
#include <cstdlib>
#include <string.h>
using namespace std;

/*
	----------------------------------
			  PRANKUR AGARWAL
			    LIT2015040
    ----------------------------------
*/

//own header inclusions
#include "basket.hpp"

/**

	This class calculates happiness and compatibility of couples.
	The "hboy" function calculates happiness of committed boys.
	The "hgirl" function calculates happiness of committed girls.
	The "total" function stores the sum of happiness of boyfriend and girlfriend in an array.
	The "compat" function calculates the compatibility of the couple.

*/

class haco_calc{
public:
	int i;
	int j;
	double hp;
	int comp;

public:
	void hboy(girls girl[], boys boy[], int coup_num, pair<int, int> info[], double ghappy[], double bhappy[]);

public:
	void hgirl(girls girl[], int coup_num, gifts gift[], vector<int> record[], pair<int, int> info[], double ghappy[]);

public:
	void htotal(int coup_num, double ghappy[], double bhappy[], double total[]);
	
};
#endif