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
		girl[temp[i].second].committed = 2;
		boy[temp[i].second].committed = 2;
		//cout << girl[temp[i].second].gname << " and " << boy[temp[i].second].bname << endl;
		c++;
		if (c == k){
			break;
		}
	}
}
