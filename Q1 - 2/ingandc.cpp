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
#include "ingandc.hpp"


/**

	It contains the method definitions of the respective header file.

*/

void ingandc::inpc(boys boy[], girls girl[], int *coup_num){
	S(*coup_num);	///number of couples
	///loop to take input of all couples: first boyfriend's then girlfriend's information
	for(i = 0; i < *coup_num; i++){
		cin >> boy[i].bname;
		S(boy[i].battract);
		S(boy[i].bintell);
		S(boy[i].bbudget);
		S(boy[i].bminreq);
		cin >> boy[i].committed;
		cin >> boy[i].gfname;
		S(boy[i].btype);
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

void ingandc::inpg(gifts gift[], int *gift_num){
	S(*gift_num);	///number of gifts
	///loop to take input of all gifts
	for(i = 0; i < *gift_num; i++){
		S(gift[i].type);
		S(gift[i].itemno);
		S(gift[i].price);
		S(gift[i].val);
		S(gift[i].lux);
		S(gift[i].diffget);
		S(gift[i].uti);
		S(gift[i].utival);
		S(gift[i].taken);
	}
}