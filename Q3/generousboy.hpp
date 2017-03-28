#ifndef GENEROUSBOY_HPP
#define GENEROUSBOY_HPP
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

class generousboy : public boys {
	public:
		generousboy(string Bname, int Battract, int Bintell, int Bbudget, int Bminreq, string Gfname, int Type) : boys(Bname, Battract, Bintell, Bbudget, Bminreq, Gfname, Type) {
			type = 2;
		}
};
#endif