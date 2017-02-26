#ifndef INPUT_HPP
#define INPUT_HPP
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
#include "boys.hpp"
#include "girls.hpp"

/**

	This class stores the input from the respective text file into objects of type boys and girls.

*/

class input{
public:
	void inp(boys boy[], girls girl[], int *boys_num, int *girls_num);
	
};
#endif