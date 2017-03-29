#ifndef BASKET_HPP
#define BASKET_HPP
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
#include <limits.h>
#include <cstdlib>
#include <string.h>
#include <vector>
using namespace std;

/*
	----------------------------------
			  PRANKUR AGARWAL
			    LIT2015040
    ----------------------------------
*/

//own header inclusions
#include "ingandc.hpp"

/**

	This class generates the gift basket for every couple wrt the boy type.


*/

class basket{
public:
	int i;
	int j;
	int num;
	int gmbud;
	int min;
	int max;
	int idx;
	int cost;
	int req;
	int flag;

public:
	void makeit(boys boy[], girls girl[], int coup_num, gifts gift[], int gift_num, pair<int, int> info[], vector<int> record[]);
};
#endif