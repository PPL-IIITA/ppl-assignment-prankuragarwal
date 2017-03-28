#ifndef CHOOSYGIRL_HPP
#define CHOOSYGIRL_HPP
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

class choosygirl : public girls {
	public:
		int type;
	
	public:
		choosygirl(string Gname, int Gattract, int Gintell, int Gmainbudget, int Gcri) : girls(Gname, Gattract, Gintell, Gmainbudget, Gcri) {
			type = 1;
		}
};
#endif