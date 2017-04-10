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

	This class contains all the attributes of a geeky boy.

*/

class geekboy : public boys {	
	public:
		geekboy(string Bname, int Battract, int Bintell, int Bbudget, int Bminreq, string Gfname, int Type) : boys(Bname, Battract, Bintell, Bbudget, Bminreq, Gfname, Type) {
			type = 3;
		}
};
#endif
