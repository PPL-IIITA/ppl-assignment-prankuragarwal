#ifndef GIRLS_HPP
#define GIRLS_HPP
#include <iostream>

/* 
	----------------------------------
			  PRANKUR AGARWAL
			    LIT2015040
    ---------------------------------- 
*/

/**

	This class contains all the attributes of a girl.

*/

class girls {
	public:
		string gname;		///girl's name
		int gattract;		///girl's attractiveness
		int gintell;		///girl's intelligence
		int gmainbudget;	///girl's maintenance budget
		int committed;		///0 if the girl is not committed else 1
		string bfname;		///name of boyfriend
		int gtype;			///girl's type: 1-Choosy; 2-Normal; 3-Desperate
		int gcri;			///girl's criteria: 1-most attractive; 2-most rich; 3-most intelligent
};
#endif