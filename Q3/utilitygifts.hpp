#ifndef UTILITYGIFTS_HPP
#define UTILITYGIFTS_HPP
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

class utilitygifts : public gifts{
public:
	int type;

public:
	utilitygifts(int Itemno, int Price, int Val, int Lux, int Diffget, int Uti, int Utival) : gifts(Itemno, Price, Val, Lux, Diffget, Uti, Utival){
		type = 2;
	}
};
#endif