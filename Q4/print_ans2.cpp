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
#include "print_ans2.hpp"

/**

	It contains the method definitions of the respective header file.

*/

void print_ans2::print(boys boy[], girls girl[], int coup_num, int gift_num, gifts gift[], vector<int> record[]){
	freopen("basket_out.txt", "w", stdout);
	///time stamp
	time_t tt = time(0);
	char* lala = ctime (&tt);
	cout << lala << endl;
	for(i = 0; i < coup_num; i++){
		n = record[i].size();
		//cout << "fuck\n";
		for(j = 0; j < n; j++){
			cout << boy[i].bname << " gifted item " << gift[record[i][j]].itemno << " to " << girl[i].gname << endl;
		}
	}
}

int print_ans2::calck(int coup_num){
	k = rand() % 10;
	k++;
	while (k > coup_num - 1){
		k = rand() % 10;
		k++;
	}
	return k;
}

void print_ans2::khappy(boys boy[], girls girl[], int coup_num, int k, double total[]){
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
	for(i = coup_num - 1; i >= 0; i--){
		cout << girl[temp[i].second].gname << " and " << boy[temp[i].second].bname << endl;
		c++;
		if (c == k){
			break;
		}
	}
}

void print_ans2::kcompat(boys boy[], girls girl[], int coup_num, int k, int compatibility[]){
	freopen("compatible.txt", "w", stdout);
	///time stamp
	time_t tt = time(0);
	char* lala = ctime (&tt);
	cout << lala << endl;
	pair<int, int> temp[coup_num];
	c = 0;
	for(i = 0; i < coup_num; i++){
		temp[i] = make_pair(compatibility[i], i);
	}
	sort(temp, temp + coup_num);
	for(i = coup_num - 1; i >= 0; i--){
		cout << girl[temp[i].second].gname << " and " << boy[temp[i].second].bname << endl;
		c++;
		if (c == k){
			break;
		}
	}
}