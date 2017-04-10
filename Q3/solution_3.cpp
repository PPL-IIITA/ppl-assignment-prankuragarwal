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
#include "print_ans.hpp"

/**

	It contains the main function required for the solution of the third question of the assignment.

*/

//global variables
boys boy[1005];
girls girl[1005];
makecouple cl;
print_couples p1;
input i1;
gifts gift[1005];
pair<int, int> info[1005];
vector<int> record[1005];
double ghappy[1005];
double bhappy[1005];
double total[1005];
int compatibility[1005];
int k;
inputgifts i2;
basket b2;
haco_calc hc2;
print_ans p2;

int coup_num;
int gift_num;
int boys_num;
int girls_num;
int c;

int main() {
	freopen("output_1.txt", "w", stdout);

	///input from text file
	i1.inp(boy, girl, &boys_num, &girls_num);

	///allocation of boyfriends to girls
    	cl.makeit(boy, girl, boys_num, girls_num);

	///print couples so formed and return number of couples
	c = p1.print(girl, girls_num);

	///output in format for further calculations
	freopen("couples_info.txt", "w", stdout);
	P(c);
	p1.out_form(boy, girl, boys_num, girls_num);

	///input couples
	freopen("couples_info.txt", "r", stdin);
	i2.inpc(boy, girl, &coup_num);

	///input gifts
	freopen("gifts_info.txt", "r", stdin);
	i2.inpg(gift, &gift_num);

	///basket generation
	b2.makeit(boy, girl, coup_num, gift, gift_num, info, record);

	///calculate happiness of girl
	hc2.hgirl(girl, coup_num, gift, record, info, ghappy);

	///calculate happiness of boy
	hc2.hboy(girl, boy, coup_num, info, ghappy, bhappy);

	///calculate total happiness
	hc2.htotal(coup_num, ghappy, bhappy, total);

	///calculate compatibility
	hc2.compat(boy, girl, coup_num, compatibility);

	///calculate k
	k = p2.calck(coup_num);

	///print gift exchanges
	p2.print(boy, girl, coup_num, gift_num, gift, record);

	///print k most happy couples
	p2.khappy(boy, girl, coup_num, k, total);

	///print k most compatible couples
	p2.kcompat(boy, girl, coup_num, k, compatibility);
	
	return 0;
}
