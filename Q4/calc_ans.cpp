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
#include "calc_ans.hpp"

/**

	It contains the method definitions of the respective header file.

*/

void update(boys boy[], girls girl[], boys boy1[], girls girl1[], int coup_num, int boys_num, int girls_num) {
	for (i = 0; i < coup_num; i++){
		temp = boy1[i].bname;
		for (j = 0; j < boys_num; j++){
			if (boy[j].bname == temp){
				idx = j;
				break;
			}
		}
		boy[idx].committed = boy1[idx].committed;
		temp = girl1[i].gname;
		for (j = 0; j < girls_num; j++){
			if (boy[j].gname == temp){
				id = j;
				break;
			}
		}
		girl[id].committed = girl1[id].committed;
	}
}
