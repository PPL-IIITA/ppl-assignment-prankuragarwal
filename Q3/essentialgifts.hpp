#ifndef ESSENTIALGIFTS_HPP
#define ESSENTIALGIFTS_HPP
#include <iostream>

/* 
	----------------------------------
			  PRANKUR AGARWAL
			    LIT2015040
    ---------------------------------- 
*/

//own header inclusions
#include "gifts.hpp"

/**

	This class contains all the attributes of an essential gift.

*/

class essentialgifts : public gifts{
public:
	int type;

public:
	essentialgifts(int Itemno, int Price, int Val, int Lux, int Diffget, int Uti, int Utival) : gifts(Itemno, Price, Val, Lux, Diffget, Uti, Utival){
		type = 1;
	}
};
#endif
