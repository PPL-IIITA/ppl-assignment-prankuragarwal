#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
#include <limits.h>
#include <cstdlib>
#include <string.h>
#include <vector>
using namespace std;

/*
	----------------------------------
			  PRANKUR AGARWAL
			    LIT2015040
    ----------------------------------
*/

//own header inclusions
#include "basket.hpp"

/**

	This file generates the gift basket for every couple wrt the boy type.
	For each couple, it checks the type of the boy first and then proceeds by gifting the most suitable gift until a condition is met.


*/

void basket::makeit(boys boy[], girls girl[], int coup_num, gifts gift[], int gift_num, pair<int, int> info[], vector<int> record[]){
	/**
		Loop to make gift basket for each couple
	*/
	for(i = 0; i < coup_num; i++){
		///initialize all gifts as not taken
		for (j = 0; j < gift_num; j++){
			gift[j].taken = 0;
		}
		flag = 1;
		num = 0;
		if((boy[i].btype == 1) || (boy[i].btype == 3)){
			gmbud = girl[i].gmainbudget;
			cost = 0;
			min = 1000000;
			idx = -1;
			for (j = 0; j < gift_num; j++){
				if(gift[j].price < min){
					min = gift[j].price;
					idx = j;
				}
			}
			if(boy[i].bbudget < min){
				boy[i].bbudget = min;
			}
			cost += min;
			record[i].push_back(idx);
			gift[idx].taken = 1;
			num++;
			for(j = 0; j < gift_num; j++){
				if(gift[j].taken == 0) {
					flag = 0;
					break;
				}
			}
			if(flag == 1){
				continue;
			}
			while(cost < gmbud){
				flag = 1;
				min = 1000000;
				for(j = 0; j < gift_num; j++){
					if(gift[j].price < min && gift[j].taken == 0){
						min = gift[j].price;
						idx = j;
					}
				}
				if(min != 1000000){
					cost += min;
					record[i].push_back(idx);
					gift[idx].taken = 1;
					num++;
				}
				for(j = 0; j < gift_num; j++){
					if(gift[j].taken == 0) {
						flag = 0;
						break;
					}
				}
				if(flag == 1){
					break;
				}
			}
			if(cost > boy[i].bbudget){
				boy[i].bbudget = cost;
			}
			if(boy[i].btype == 3){
				req = boy[i].bbudget - cost;
				if(req > 0){
					for (j = 0; j < gift_num; j++){
						if(gift[j].taken == 0 && gift[j].price <= req && gift[j].lux == 1){
							record[i].push_back(idx);
							cost += gift[j].price;
							gift[j].taken = 1;
							num++;
							break;
						}
					}
				}
			}
		} else if (boy[i].btype == 2){
			gmbud = boy[i].bbudget;
			cost = 0;
			max = -10;
			flag = 1;
			idx = -1;
			for (j = 0; j < gift_num; j++){
				if(gift[j].price > max){
					max = gift[j].price;
					idx = j;
				}
			}
			if(boy[i].bbudget < max){
				boy[i].bbudget = max;
			}
			cost += max;
			record[i].push_back(idx);
			gift[idx].taken = 1;
			num++;
			for(j = 0; j < gift_num; j++){
				if(gift[j].taken == 0) {
					flag = 0;
					break;
				}
			}
			if(flag == 1){
				continue;
			}
			while(cost < gmbud){
				flag = 1;
				max = -10;
				for(j = 0; j < gift_num; j++){
					if(gift[j].price > max && gift[j].taken == 0){
						max = gift[j].price;
						idx = j;
					}
				}
				if (cost + max <= gmbud && max != -10){
					cost += max;
					record[i].push_back(idx);
					gift[idx].taken = 1;
					num++;
				} else {
					gift[idx].taken = 1;
				}
				for(j = 0; j < gift_num; j++){
					if(gift[j].taken == 0) {
						flag = 0;
						break;
					}
				}
				if(flag == 1){
					break;
				}
			}
		}
		info[i] = make_pair(cost, num);
	}
}