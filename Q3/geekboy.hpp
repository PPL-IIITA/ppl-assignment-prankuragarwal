#ifndef GEEKBOY_HPP
#define GEEKBOY_HPP
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

class geekboy : public boys {
	public:
		int type;
	
	public:
		geekboy(string Bname, int Battract, int Bintell, int Bbudget, int Bminreq) : boys(Bname, Battract, Bintell, Bbudget, Bminreq) {
			type = 3;
		}
};
#endif