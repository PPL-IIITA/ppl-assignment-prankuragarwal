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
#include "inputgifts.hpp"


/**

	It contains the method definitions of the respective header file.

*/

void inputgifts::inpc(boys boy[], girls girl[], int *coup_num){
	S(*coup_num);	///number of couples
	///loop to take input of all couples: first boyfriend's then girlfriend's information
	for(i = 0; i < *coup_num; i++){
		cin >> bname;
		S(battract);
		S(bintell);
		S(bbudget);
		S(bminreq);
		cin >> gfname;
		S(btype);
		if (btype == 1){
			miserboy *temp = new miserboy(bname, battract, bintell, bbudget, bminreq, gfname);
			*temp.committed = 1;
			boy[i] = *temp;
		} else if (btype == 2){
			generousboy *temp = new generousboy(bname, battract, bintell, bbudget, bminreq, , gfname);
			*temp.committed = 1;
			boy[i] = *temp;
		} else if (btype == 3){
			geekboy *temp = new geekboy(bname, battract, bintell, bbudget, bminreq, , gfname);
			*temp.committed = 1;
			boy[i] = *temp;
		}

		cin >> gname;
		S(gattract);
		S(gintell);
		S(gmainbudget);
		cin >> bfname;
		S(gtype);
		S(gcri);
		if (gtype == 1){
			choosygirl *temp = new choosygirl(gname, gattract, gintell, gmainbudget, gcri, bfname);
			*temp.committed = 1;
			girl[i] = *temp;
		} else if (gtype == 2){
			normalgirl *temp = new normalgirl(gname, gattract, gintell, gmainbudget, gcri, bfname);
			*temp.committed = 1;
			girl[i] = *temp;
		} else if (gtype == 3){
			desperategirl *temp = new desperategirl(gname, gattract, gintell, gmainbudget, gcri, bfname);
			*temp.committed = 1;
			girl[i] = *temp;
		}
	}
}

void inputgifts::inpg(gifts gift[], int *gift_num){
	S(*gift_num);	///number of gifts

	int type, itemno, price, val, lux, diffget, uti, utival;

	///loop to take input of all gifts
	for(i = 0; i < *gift_num; i++){
		S(type);
		S(itemno);
		S(price);
		S(val);
		S(lux);
		S(diffget);
		S(uti);
		S(utival);
		if (type == 1){
			essentialgifts *temp = new essentialgifts(itemno, price, val, lux, diffget, uti, utival);
			gift[i] = *temp;
		} else if (type == 2){
			luxurygifts *temp = new luxurygifts(itemno, price, val, lux, diffget, uti, utival);
			gift[i] = *temp;
		} else if (type == 3){
			utilitygifts *temp = new utilitygifts(itemno, price, val, lux, diffget, uti, utival);
			gift[i] = *temp;
		}
	}
}