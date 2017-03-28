#ifndef PRINT_COUPLES_HPP
#define PRINT_COUPLES_HPP
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
#include "makecouple.hpp"

/**

	This class prints the couples so formed into a text file.

*/

class print_couples{
public:
	int i;
	int j;
	string bn;

public:
	int print(girls girl[], int girls_num);

public:
	void out_form(boys boy[], girls girl[], int boys_num, int girls_num);
	
};
#endif