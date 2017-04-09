#ifndef CALC_ANS_HPP
#define CALC_ANS_HPP
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
#include "print_haco.hpp"

/**

	This class prints the k most happy, k most compatible couples and all the gift exchanges in separate text files.

*/

class calc_ans{
public:
	int i;
	int j;
	int idx;
	int id;
	int k;
	string temp;


public:
	void update(boys boy[], girls girl[], boys boy1[], girls girl1[], int coup_num, int boys_num, int girls_num);

	
};
#endif