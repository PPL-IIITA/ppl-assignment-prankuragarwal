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

#define ll         long long
#define S(x)       scanf("%d", &x)
#define Sl(x)      scanf("%lld", &x)
#define P(x)       printf("%d\n", x)
#define Pl(x)      printf("%lld\n", x)

//own header inclusions
#include "print_couples.hpp"

/**

	It contains the main function required for the solution of the first question of the assignment.

*/

//global variables
boys boy[1005];
girls girl[1005];
calculate cl;
print_couples p1;
input i1;
int boys_num;
int girls_num;
int c;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output_1.txt", "w", stdout);

	///input from text file
	i1.inp(boy, girl, &boys_num, &girls_num);

	///allocation of boyfriends to girls
    cl.calc(boy, girl, boys_num, girls_num);

	///print couples so formed and return number of couples
	c = p1.print(girl, girls_num);

	///output in format for further calculations
	freopen("couples_info.txt", "w", stdout);
	P(c);
	p1.out_form(boy, girl, boys_num, girls_num);
	
	return 0;
}