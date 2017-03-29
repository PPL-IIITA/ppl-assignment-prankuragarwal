#ifndef INGANDC_HPP
#define INGANDC_HPP
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

#define ll         long long
#define S(x)       scanf("%d", &x)
#define Sl(x)      scanf("%lld", &x)

//own header inclusions
#include "input.hpp"
#include "gifts.hpp"


/**

	This class stores the input from the respective text filea into objects of type boys, girls and gifts.

*/

class ingandc{
public:
	int i;

public:
	void inpc(boys boy[], girls girl[], int *coup_num); ///for couples

public:
	void inpg(gifts gift[], int *gift_num);	///for gifts
	
};
#endif