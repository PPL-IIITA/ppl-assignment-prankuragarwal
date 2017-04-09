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
#include "calculate.hpp"

/**

	It contains the method definitions of the respective header file.

*/

void calculate::calc(boys boy[], girls girl[], int boys_num, int girls_num) {
	/**
		loop to assign boys to girls
	*/
	for (i = 0; i < boys_num - 1; i++){
		for (j = i + 1; j < boys_num; j++){
			if (boy[i].attractive > boy[j].attractive){
				boys temp = boy[i];
				boy[i] = boy[j];
				boy[j] = temp;
			}
		}
	}

	for (i = 0;  i < girls_num - 1; i++){
		for (j = i + 1; j < girls_num; j++){
			if(girl[i].gmainbudget > girl[j].gmainbudget){
				girls temp = girl[i];
				girl[i] = girl[j];
				girl[j] = temp;
			}
		}
	}

	for (k = 0; k < boys_num + girls_num; k++){
		if (k % 2 == 1){
			for (i = 0; i < boys_num; i++){
				ma = 0;
				fl = 0;
				idx = -1;
				if (boy[i].committed == 1){
					continue;
				}
				for(j = 0; j < girls_num; j++){
					if(girl[j].gattract > ma){
						ma = girl[j].gattract;
						idx = j;
						fl = 1;
					}
				}
				if(fl == 1){
						girl[i].bfname = boy[idx].bname;
						girl[i].committed = 1;
						boy[idx].committed = 1;
						boy[idx].gfname = girl[i].gname;
				}
				if (fl == 1){
					break;
				}
			}
		} else {
			for(i = 0; i < girls_num; i++){
				ma = 0;
				fl = 0;
				idx = -1;
				if (girl[i].committed == 1){
					continue;
				}
				if(girl[i].gcri == 1){		///most attractive
					for(j = 0; j < boys_num; j++){
						if(boy[j].committed == 0){
							if(boy[j].bminreq <= girl[i].gattract && boy[j].bbudget >= girl[i].gmainbudget){
								if(boy[j].battract > ma){
									idx = j;
									ma = boy[j].battract;
									fl = 1;
								}
							}
						}
					}
					if(fl == 1){
						girl[i].bfname = boy[idx].bname;
						girl[i].committed = 1;
						boy[idx].committed = 1;
						boy[idx].gfname = girl[i].gname;
					}
				} else if(girl[i].gcri == 2){ 		///most rich
						for(j = 0; j < boys_num; j++){
						if(boy[j].committed == 0){
							if(boy[j].bminreq <= girl[i].gattract && boy[j].bbudget >= girl[i].gmainbudget){
								if(boy[j].bbudget > ma){
									idx = j;
									ma = boy[j].bbudget;
									fl = 1;
								}
							}
						}
					}
					if(fl == 1){
						girl[i].bfname = boy[idx].bname;
						girl[i].committed = 1;
						boy[idx].committed = 1;
						boy[idx].gfname = girl[i].gname;
					}
				} else if(girl[i].gcri == 3){		///most intelligent
					for(j = 0; j < boys_num; j++){
						if(boy[j].committed == 0){
							if(boy[j].bminreq <= girl[i].gattract && boy[j].bbudget >= girl[i].gmainbudget){
								if(boy[j].bintell > ma){
									idx = j;
									ma = boy[j].bintell;
									fl = 1;
								}
							}
						}
					}
					if(fl == 1){
						girl[i].bfname = boy[idx].bname;
						girl[i].committed = 1;
						boy[idx].committed = 1;
						boy[idx].gfname = girl[i].gname;
					}
				}
				if (fl == 1){
					break;
				}
			}
		}
	}
}