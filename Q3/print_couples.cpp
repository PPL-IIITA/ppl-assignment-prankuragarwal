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
#include "print_couples.hpp"

/**

	It contains the method definitions of the respective header file.

*/

int print_couples::print(girls girl[], int girls_num){
	///time stamp
	time_t tt = time(0);
	char* lala = ctime (&tt);
	cout << lala << endl;

	j = 0;
	for(i = 0; i < girls_num; i++){
		if(girl[i].committed == 1){
			j++;
			cout << girl[i].gname << " has boyfriend " << girl[i].bfname << endl;
		}
	}
	return j;
}

void print_couples::out_form(boys boy[], girls girl[], int boys_num, int girls_num){
	for(i = 0; i < girls_num; i++){
		if(girl[i].committed == 1){
			bn = girl[i].bfname;
			for(j = 0; j < boys_num; j++){
				if(boy[j].bname == bn){
					cout << boy[j].bname << " " << boy[j].battract << " " << boy[j].bintell << " " << boy[j].bbudget << " " << boy[j].bminreq << " " << boy[j].committed << " " << boy[j].gfname << " " << boy[j].btype << endl;
					cout << girl[i].gname << " " << girl[i].gattract << " " << girl[i].gintell << " " << girl[i].gmainbudget << " " << girl[i].committed << " " << girl[i].bfname << " " << girl[i].gtype << " " << girl[i].gcri << endl;
				}
			}
		}
	}
}