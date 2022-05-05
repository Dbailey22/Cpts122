// This example will allow us to explore
// classes, data members, member functions,
// constructor, destructors, function overloading,
// operator overloading, etc. We are building
// these ideas around a Rational object

// History: 7/2 - Implemented overloaded stream insertion (<<) with
//          std::ostream and Rational objects, implemented
//          overloaded less than < to work with two Rational
//          objects. Discussed more about the impact of const.
//          7/1 - Implemented the Rational copy constructor, destructor,
//          overloaded assignment (=), function f () for demonstration
//          of the invoking the copy constructor, and we defined
//          the overloaded stream extraction operator (>>).
//          6/30 - Implemented three versions of the Rational
//          constructor. We discussed the setters and getter
//          in the Rational class.

#include "Rational.h"

int main(void)
{
	
	Rational r1, r2(5, 6), r3(7), 
		r4 = r3; // this looks like it should be the overloaded copy assignment, but
	             // it's actually the copy constructor. It's the copy
	             // constructor because we are declaring and constructing
	             // a new object r4 from an existing object r3.
	
	std::cout << r1 << std::endl; // invokes our overloaded <<

	if (r2 < r2) // invokes our overloaded <
	{
		std::cout << "yes, it's less than!" << std::endl;
	}
	else
	{
		std::cout << "not, it's not less than!" << std::endl;

	}

	std::ifstream infile;

	infile.open("RNumbers.txt");

	infile >> r1; // call our explicitly defined overloaded stream extraction with file objects
	std::cout << r1.getNumerator() << " / " << r1.getDenominator() << std::endl;

	infile.close();


	//std::cout << r1 << std::endl;
	//std::cin >> r1;
	// file >> r1 >> r2;

	f(r1); // copy of r1 is made -- copy constructor invoked
	r1 = r2; // invokes copy assignment operator

	return 0;
}