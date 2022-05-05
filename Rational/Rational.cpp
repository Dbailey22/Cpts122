// We will place the definitions for only
// Rational's operations in this file

#include "Rational.h"

//Rational::Rational()
//{
//	mNumerator = 1;
//	mDenominator = 1;
//}

Rational::Rational(const int newNumerator,
	const int newDenominator)
{
	mNumerator = newNumerator;
	if (newDenominator != 0) // make sure the parameter is not 0
	{
		mDenominator = newDenominator;
	}
	else // if the parameter is 0; let's default to 1 for denominator
	{
		mDenominator = 1;
	}
}

// copy constructor -- describe how to copy a Rational object
Rational::Rational(Rational& copy)
{
	// how are we going copy a Rational object?
	mNumerator = copy.mNumerator; //copy.getNumerator();
	mDenominator = copy.mDenominator;
}

// destructor - responsible for cleaning resources related
	// to the object - freeing dynamic memory, closes streams
Rational::~Rational()
{
	std::cout << "Inside of Rational destructor!" << std::endl;
}

int Rational::getNumerator() const
{
	return mNumerator; // returns a copy of the private numerator to the outside world!
}

int Rational::getDenominator() const
{
	return mDenominator; // returns a copy of the private denominator to the outside world!
}


void Rational::setNumerator(const int newNumerator)
{
	mNumerator = newNumerator;
}

void Rational::setDenominator(const int newDenominator)
{
	// validate the denominator
	if (newDenominator != 0)
	{
		mDenominator = newDenominator;
	}
}


// overloaded copy assignment - r1 = r2 = r3;
Rational& Rational::operator= (Rational& rhs)
{
	// r1 = copy; // Rational &copy = r1;

	// check for self assignment
	if (this != &rhs) // this is the address of the start of an object
	{
		mNumerator = rhs.mNumerator;
		mDenominator = rhs.mDenominator;
	}

	return *this;
}

std::ifstream& operator>> (std::ifstream& lhs,
	Rational& rhs)
{
	// numerator / denominator
	int num = 0;
	lhs >> num;
	rhs.setNumerator(num);
	char slash = '\0';
	lhs >> slash;
	int den = 0;
	lhs >> den;
	rhs.setDenominator(den);

	return lhs;
}




std::ostream& operator<< (std::ostream& lhs,
	const Rational& rhs)
{
	lhs << rhs.getNumerator() << " / " << rhs.getDenominator();

	return lhs;
}


bool operator< (const Rational& lhs, const Rational& rhs)
{
	// r1 = 5 / 6, r2 = 10 / 11
	bool result = false;
	if (lhs.getNumerator()*rhs.getDenominator () <
		rhs.getNumerator() * lhs.getDenominator ())
	{
		// found common denominator
		result = true;
	}

	return result;
}

void f(Rational obj)
{
	std::cout << obj.getNumerator() << " / " << obj.getDenominator() << std::endl;
}