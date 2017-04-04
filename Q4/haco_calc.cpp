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

	It contains the method definitions of the respective header file.

*/

void haco_calc::hboy(girls girl[], boys boy[], int coup_num, pair<int, int> info[], double ghappy[], double bhappy[]){
	for (i = 0; i < coup_num; i++){
		if(boy[i].btype == 1) {
			hp = boy[i].bbudget - info[i].first;
			bhappy[i] = hp;
		} else if(boy[i].btype == 2) {
			hp = ghappy[i];
			bhappy[i] = hp;
		} else if(boy[i].btype == 3) {
			hp = girl[i].gintell;
			bhappy[i] = hp;
		}
	}
}

void haco_calc::hgirl(girls girl[], int coup_num, gifts gift[], vector<int> record[], pair<int, int> info[], double ghappy[]){
	for (i = 0; i < coup_num; i++){
		if (girl[i].gtype == 1) {
			hp = info[i].first;
			for (j = 0; j < record[i].size(); j++){
				if(gift[record[i][j]].lux == 1){
					hp += (2 * gift[record[i][j]].val);
				}
			}
			ghappy[i] = log(hp);
		} else if (girl[i].gtype == 2) {
			hp = info[i].first;
			hp = hp - girl[i].gmainbudget;
			for (j = 0; j < record[i].size(); j++){
				hp += gift[record[i][j]].val;
			}
			ghappy[i] = hp;
		} else if (girl[i].gtype == 3) {
			hp = info[i].first;
			hp = hp - girl[i].gmainbudget;
			ghappy[i] = exp(hp);
		}
	}
}

void haco_calc::htotal(int coup_num, double ghappy[], double bhappy[], double total[]){
	for(i = 0; i < coup_num; i++){
		total[i] = ghappy[i] + bhappy[i];
	}
}
