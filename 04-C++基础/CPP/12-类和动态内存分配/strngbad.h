#include <iostream>
#ifndef _STRNGBAD_H
#define _STRNGBAD_H

class StringBad { 
	private:
		char *str;
		int len;
		static int num_strings;
	public:
		StringBad(const char * s);
		StringBad();
		~StringBad();

		friend std::ostream & operator<<(std::ostream  & os, const StringBad & st);

};

#endif /* _STRNGBAD_H */
