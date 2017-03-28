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

int main(){
	freopen("input11.txt", "w", stdout);
	int i;
	int temp;
	int boy_num = rand() % 40;
	boy_num++;
	int girl_num = rand() % 15;
	girl_num++;
	if(boy_num < girl_num){
        temp = boy_num;
        boy_num = girl_num;
        girl_num = temp;
	}
	cout << boy_num << " " << girl_num << endl;
	for(i = 0; i < boy_num; i++){
		cout << "boy_" << i << " ";
		temp = rand() % 10;
		temp++;
		cout << temp << " ";
		temp = rand() % 10;
		temp++;
		cout << temp << " ";
		temp = rand() % 5000;
		temp++;
		cout << temp << " ";
		temp = rand() % 10;
		temp++;
		cout << temp << endl;
	}
	for(i = 0; i < girl_num; i++){
		cout << "girl_" << i << " ";
		temp = rand() % 10;
		temp++;
		cout << temp << " ";
		temp = rand() % 10;
		temp++;
		cout << temp << " ";
		temp = rand() % 5000;
		temp++;
		cout << temp << " ";
		temp = rand() % 3;
		temp++;
		cout << temp << endl;
	}
}
