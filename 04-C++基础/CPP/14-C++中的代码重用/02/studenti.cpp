#include <iostream>
#include "studenti.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::istream;

// public 
double Student::Average() const
{ 
	if(ArrayDb::size() > 0)
		return ArrayDb::sum() / ArrayDb::size();
	else
		return 0;
}

const string & Student::Name() const
{ 
	return (const string &) *this;
}

double Student::operator[](int i) const
{ 
	return ArrayDb::operator[](i);
}
double & Student::operator[](int i)
{ 
	return ArrayDb::operator[](i);
}

// private
ostream & Student::arr_out(ostream & os) const
{ 
	int i;
	int lim = ArrayDb::size();
	if(lim > 0)
	{ 
		for(i = 0; i < lim; i++)
		{ 
			if(i % 5 == 4)
				os << endl;
		}
		if(i % 5 != 0)
			os << endl;
	}
	else
		os << " empty array ";
	return os;
}



std::istream & operator>>(std::istream & is,
						  Student & stu)
{ 
	is >> (string &) stu;
	return is;
}
std::istream & getline(std::istream & is,
					   Student & stu)
{ 
	getline(is, (string &)stu);
	return is;
}
std::ostream & operator<<(std::ostream & os,
						  const Student & stu)
{ 
	os << " Scores for" << (const string &) stu <<":\n";
	stu.arr_out(os);

	return os;
}










