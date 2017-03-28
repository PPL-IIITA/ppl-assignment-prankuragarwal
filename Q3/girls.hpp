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
		int gcri;			///girl's criteria: 1-most attractive; 2-most rich; 3-most intelligent
		int type;			///girl's type: 1-Choosy; 2-Normal; 3-Desperate

	public:
		girls(string Gname, int Gattract, int Gintell, int Gmainbudget, int Gcri, string Bfname, int Type){
			gname = Gname;
			gattract = Gattract;
			gintell = Gintell;
			gmainbudget = Gmainbudget;
			committed = 0;
			bfname = Bfname;
			gcri = Gcri;
			type = Type;
		}

	public:
		girls(){
			
		}
};
#endif