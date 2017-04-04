#ifndef PRINT_HACO_HPP
#define PRINT_HACO_HPP
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
#include "haco_calc.hpp"

/**

	This class prints the k most happy, k most compatible couples and all the gift exchanges in separate text files.

*/

class print_haco{
public:
	int i;
	int j;
	int c;
	int n;
	int k;


public:
	int calck(int coup_num);

public:
	void khappy(boys boy[], girls girl[], int coup_num, int k, double total[]);
	
};
#endif