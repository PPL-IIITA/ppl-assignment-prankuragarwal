#include <iostream>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <math.h>
#include <limits.h>
#include <cstdlib>
#include <string.h>
#include <vector>
#include <map>
#include <stack>
#include <time.h>
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

int main() {
	freopen("gifts_info.txt", "w", stdout);
	srand(time(NULL));
	int i;
	int temp;
	int gift_num;
	int l;
	int price[65];
	gift_num = rand() % 60;
	gift_num++;
	while (gift_num < 60){
		gift_num = rand() % 60;
		gift_num++;
	}
	cout << gift_num << endl;
	for (i = 0; i < gift_num; i++){
		price[i] = rand() % 249;
		price[i]++;
	}
	sort(price, price + i);
	for (i = 0; i < gift_num; i++){
		temp = rand() % 3;
		temp++;
		cout << temp << " ";
		l = temp;
		cout << i + 1 << " " << price[i] << " ";
		temp = rand() % 15;
		temp++;
		cout << temp << " ";
		l = temp;
		if(l == 2){
			temp = 1;
		} else {
			temp = 0;
		}
		cout << temp << " ";
		temp = rand() % 10;
		temp++;
		cout << temp << " ";
		temp = rand() % 25;
		temp++;
		cout << temp << " ";
		temp = rand() % 3;
		temp++;
		cout << temp << endl;
	}
	return 0;
}
