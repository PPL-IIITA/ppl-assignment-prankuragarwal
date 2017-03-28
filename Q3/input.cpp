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
	freopen("input.txt", "r", stdin);

	int i;
	S(*boys_num);		///input number of boys
	S(*girls_num);		///input number of girls

	string bname, gfname;
	int battract, bintell, bbudget, bminreq, btype;

	///loop to take input of all boys
	for(i = 0; i < *boys_num; i++){
		cin >> bname;
		S(battract);
		S(bintell);
		S(bbudget);
		S(bminreq);
		S(btype);
		gfname = "\0";
		if (btype == 1){
			miserboy *temp = new miserboy(bname, battract, bintell, bbudget, bminreq, gfname, 1);
			boy[i] = *temp;
		} else if (btype == 2){
			generousboy *temp = new generousboy(bname, battract, bintell, bbudget, bminreq, gfname, 2);
			boy[i] = *temp;
		} else if (btype == 3){
			geekboy *temp = new geekboy(bname, battract, bintell, bbudget, bminreq, gfname, 3);
			boy[i] = *temp;
		}
	}

	string gname, bfname;
	int gattract, gintell, gmainbudget,gtype, gcri;

	///loop to take input of all girls
	for(i = 0; i < *girls_num; i++){
		cin >> gname;
		S(gattract);
		S(gintell);
		S(gmainbudget);
		S(gtype);
		S(gcri);
		bfname = "\0";
		if (gtype == 1){
			choosygirl *temp = new choosygirl(gname, gattract, gintell, gmainbudget, gcri, bfname, 1);
			girl[i] = *temp;
		} else if (gtype == 2){
			normalgirl *temp = new normalgirl(gname, gattract, gintell, gmainbudget, gcri, bfname, 2);
			girl[i] = *temp;
		} else if (gtype == 3){
			desperategirl *temp = new desperategirl(gname, gattract, gintell, gmainbudget, gcri, bfname, 3);
			girl[i] = *temp;
		}
	}
}
