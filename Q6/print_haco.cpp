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
#include "print_haco.hpp"

/**

	It contains the method definitions of the respective header file.

*/

int print_haco::calck(int coup_num){
	k = rand() % 10;
	k++;
	while (k > coup_num - 1){
		k = rand() % 10;
		k++;
	}
	return k;
}

void print_haco::khappy(boys boy[], girls girl[], int coup_num, int k, double total[]){
	freopen("happy.txt", "w", stdout);
	int ctr = 2;
	///time stamp
	time_t tt = time(0);
	char* lala = ctime (&tt);
	cout << lala << endl;
	pair<double, int> temp[coup_num];
	c = 0;
	for(i = 0; i < coup_num; i++){
		temp[i] = make_pair(total[i], i);
	}
	sort(temp, temp + coup_num);

	for(i = 0; i < coup_num; i++){
		girl[temp[i].second].committed = ctr;
		boy[temp[i].second].committed = ctr;
		ctr++;
		//cout << girl[temp[i].second].gname << " and " << boy[temp[i].second].bname << endl;
		c++;
		if (c == k){
			break;
		}
	}
}

void print_haco::update(boys boy1[], girls girl1[], boys boy[], girls girl[], int coup_num, int boys_num, int girls_num) {
	for (i = 0; i < coup_num; i++){
		for(j = 0; j < boys_num; j++){
			if (boy1[i].bname == boy[j].bname){
				boy[j] = boy1[i];
				break;
			}
		}
	}
	for (i = 0; i < coup_num; i++){
		for (j = 0; j < girls_num; j++){
			if (girl1[i].gname == girl[j].gname){
				girl[j] = girl1[i];
				break;
			}
		}
	}
}
