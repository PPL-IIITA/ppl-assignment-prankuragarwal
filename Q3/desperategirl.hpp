#ifndef DESPERATEGIRL_HPP
#define DESPERATEGIRL_HPP
#include <iostream>

/* 
	----------------------------------
			  PRANKUR AGARWAL
			    LIT2015040
    ---------------------------------- 
*/

//own header inclusions
#include "girls.hpp"

/**

	This class contains all the attributes of a miser boy.

*/

class desperategirl : public girls {
	public:
		int type;
	
	public:
		desperategirl(string Gname, int Gattract, int Gintell, int Gmainbudget, int Gcri) : girls(Gname, Gattract, Gintell, Gmainbudget, Gcri) {
			type = 3;
		}
};
#endif