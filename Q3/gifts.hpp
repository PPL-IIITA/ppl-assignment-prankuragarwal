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
		int itemno;		///gift's number
		int price;		///gift's price
		int val;		///gift's value
		int lux;		///1 if luxury gift else 0
		int diffget;	///diificulty to obtain the gift
		int uti;		///utility value
		int utival;		///utility class
		int taken;		///0 if the gift is not taken else 1

	/**
		Constructors
	*/

	public:
		gifts(int Itemno, int Price, int Val, int Lux, int Diffget, int Uti, int Utival){
			itemno = Itemno;
			price = Price;
			val = Val;
			lux = Lux;
			diffget = Diffget;
			uti = Uti;
			Utival = utival;
			taken = 0;
		}

	public:
		gifts(){
			
		}
};
#endif
