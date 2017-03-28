#ifndef BOYS_HPP
#define BOYS_HPP
#include <iostream>

/*
	----------------------------------
			  PRANKUR AGARWAL
			    LIT2015040
    ---------------------------------- 
*/

/**

	This class contains all the attributes of a boy.

*/

class boys {
	public:
		string bname;	///boy's name
		int battract;	///boy's attractiveness
		int bintell;	///boy's intelligence
		int bbudget;	///boy's budget
		int bminreq;	///boy's minimum requirement of attractiveness of girl
		int committed;	///0 if the boy is not committed else 1
		string gfname;	///name of the girlfriend
		int type; 		///boy's type : 1-Miser; 2-Generous; 3-Geek

	public:
		boys(string Bname, int Battract, int Bintell, int Bbudget, int Bminreq, string Gfname, int Type){
			bname = Bname;
			battract = Battract;
			bintell = Bintell;
			bbudget = Bbudget;
			bminreq = Bminreq;
			committed = 0;
			gfname = Gfname;
			type = Type;
		}

	public:
		boys(){
			
		}
};
#endif