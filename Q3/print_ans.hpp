#ifndef PRINT_ANS_HPP
#define PRINT_ANS_HPP
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

class print_ans{
public:
	int i;
	int j;
	int c;
	int n;
	int k;

public:
	void print(boys boy[], girls girl[], int coup_num, int gift_num, gifts gift[], vector<int> record[]);

public:
	int calck(int coup_num);

public:
	void khappy(boys boy[], girls girl[], int coup_num, int k, double total[]);

public:
	void kcompat(boys boy[], girls girl[], int coup_num, int k, int compatibility[]);
	
};
#endif