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

#define ll         long long
#define S(x)       scanf("%d", &x)
#define Sl(x)      scanf("%lld", &x)
#define P(x)       printf("%d\n", x)
#define Pl(x)      printf("%lld\n", x)

//own header inclusions
#include "print_ans2.hpp"

/**

	It contains the main function required for the solution of the second question of the assignment.

*/

//global variables
boys boy[1005];
girls girl[1005];
gifts gift[1005];
pair<int, int> info[1005];
vector<int> record[1005];
double ghappy[1005];
double bhappy[1005];
double total[1005];
int compatibility[1005];
int k;
ingandc i1;
basket b1;
haco_calc hc1;
print_ans2 p1;

int coup_num;
int gift_num;

int main() {
	///input couples
	freopen("couples_info.txt", "r", stdin);
	i1.inpc(boy, girl, &coup_num);

	///input gifts
	freopen("gifts_info.txt", "r", stdin);
	i1.inpg(gift, &gift_num);

	///basket generation
	b1.makeit(boy, girl, coup_num, gift, gift_num, info, record);

	///calculate happiness of girl
	hc1.hgirl(girl, coup_num, gift, record, info, ghappy);

	///calculate happiness of boy
	hc1.hboy(girl, boy, coup_num, info, ghappy, bhappy);

	///calculate total happiness
	hc1.htotal(coup_num, ghappy, bhappy, total);

	///calculate compatibility
	hc1.compat(boy, girl, coup_num, compatibility);

	///calculate k
	k = p1.calck(coup_num);

	///print gift exchanges
	p1.print(boy, girl, coup_num, gift_num, gift, record);

	///print k most happy couples
	p1.khappy(boy, girl, coup_num, k, total);

	///print k most compatible couples
	p1.kcompat(boy, girl, coup_num, k, compatibility);

	return 0;
}
