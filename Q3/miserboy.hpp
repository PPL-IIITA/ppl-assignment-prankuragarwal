#ifndef MISERBOY_HPP
#define MISERBOY_HPP
#include <iostream>

/* 
	----------------------------------
			  PRANKUR AGARWAL
			    LIT2015040
    ---------------------------------- 
*/

//own header inclusions
#include "boys.hpp"

/**

	This class contains all the attributes of a miser boy.

*/

class miserboy : public boys {
	public:
		int type;
	
	public:
		miserboy(string Bname, int Battract, int Bintell, int Bbudget, int Bminreq) : boys(Bname, Battract, Bintell, Bbudget, Bminreq) {
			type = 1;
		}
};
#endif