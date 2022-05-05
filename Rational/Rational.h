// We will place each class declaration
// in a separate .h file. Each .h file
// will be named the same as the class.

#pragma once

#include <iostream>
#include <fstream>

using std::cout; // we can now use cout without explicitly writing std::cout
using std::cin; // cin - other::cin - using other::cin;
using std::endl;
using std::fstream;

// class Rational; // forward declaration

// using namespace std;

// Blueprint for a rational number
class Rational
{
public:
	// In here will be our well defined interfaces
	// to the object - member functions
	//Rational(); // default
	//Rational(const int newNumerator, 
	//	const int newDenominator); // constructor w/ 2 parameters
	Rational(const int newNumerator = 1,
		const int newDenominator = 1); // constructor w/ default arguments
	
	// copy constructor -- describe how to copy a Rational object
	Rational(Rational &copy);

	// destructor - responsible for cleaning resources related
	// to the object - freeing dynamic memory, closes streams
	~Rational();

	// overloaded copy assignment - r1 = r2 = r3;
	Rational& operator= (Rational& rhs);

	// getters/accessors
	int getNumerator() const;
	int getDenominator() const;

	// setters/mutators
	void setNumerator(const int newNumerator);
	void setDenominator(const int newDenominator);

	//Rational add(Rational lhs, Rational rhs);

private:
	// attributes - data members
	// rational numbers may defined as:
	// numerator / denominator
	int mNumerator;
	int mDenominator;
};

std::ifstream& operator>> (std::ifstream &lhs,
	Rational &rhs);

// non member operators - symmetry, forms of possible operands
std::ostream & operator<< (std::ostream& lhs, const Rational& rhs);
		  // std::cout << r1 << r2;
          // return lhs;

bool operator< (const Rational& lhs, const Rational& rhs);
// if (r1 < r2 < r3)
//bool operator< (const double& lhs, const Rational& rhs);
//// if (4.5 < r1)
//bool operator< (const Rational& lhs, const double& rhs);
void f(Rational obj);