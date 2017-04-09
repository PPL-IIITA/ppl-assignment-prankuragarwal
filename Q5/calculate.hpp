#ifndef CALCULATE_HPP
#define CALCULATE_HPP
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
#include "input.hpp"

/**

	This class assigns boyfriends to girls according to the criteria given in the input.

*/

class calculate {
public:
	int i;
	int j;
	int k;
	int idx;
	int fl;
	int ma;

public:
	void calc(boys boy[], girls girl[], int boys_num, int girls_num);
	
};
#endif