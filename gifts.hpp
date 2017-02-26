#ifndef GIFTS_HPP
#define GIFTS_HPP
#include <iostream>

/* 
	----------------------------------
			  PRANKUR AGARWAL
			    LIT2015040
    ---------------------------------- 
*/

/**

	This class contains all the attributes of a gift.

*/

class gifts{
public:
	int type;		///gift's type: 1-essential; 2-luxury; 3-utility
	int itemno;		///gift's number
	int price;		///gift's price
	int val;		///gift's value
	int lux;		///1 if luxury gift else 0
	int diffget;	///diificulty to obtain the gift
	int uti;		///utility value
	int utival;		///utility class
	int taken;		///0 if the gift is not taken else 1
};
#endif