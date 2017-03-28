#ifndef LUXURYGIFTS_HPP
#define LUXURYGIFTS_HPP
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

	This class contains all the attributes of a gift.

*/

class luxurygifts : public gifts{
public:
	int type;

public:
	luxurygifts(int Itemno, int Price, int Val, int Lux, int Diffget, int Uti, int Utival) : gifts(Itemno, Price, Val, Lux, Diffget, Uti, Utival){
		type = 2;
	}
};
#endif