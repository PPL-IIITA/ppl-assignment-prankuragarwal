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

/**

	It contains the method definitions of the respective header file.

*/

void input::inp(boys boy[], girls girl[], int *boys_num, int *girls_num){
	int i;
	S(*boys_num);		///input number of boys
	S(*girls_num);		///input number of girls
	///loop to take input of all boys
	for(i = 0; i < *boys_num; i++){
		cin >> boy[i].bname;
		S(boy[i].battract);
		S(boy[i].bintell);
		S(boy[i].bbudget);
		S(boy[i].bminreq);
		cin >> boy[i].committed;
		cin >> boy[i].gfname;
		S(boy[i].btype);
	}
	///loop to take input of all girls
	for(i = 0; i < *girls_num; i++){
		cin >> girl[i].gname;
		S(girl[i].gattract);
		S(girl[i].gintell);
		S(girl[i].gmainbudget);
		cin >> girl[i].committed;
		cin >> girl[i].bfname;
		S(girl[i].gtype);
		S(girl[i].gcri);
	}
}