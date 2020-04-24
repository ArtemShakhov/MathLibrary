// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "stdafx.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "MathLibrary.h"

// DLL internal state variables:
static unsigned long long god;  // Previous value, if any
//static unsigned long long current_;   // Current sequence value
//static unsigned index_;               // Current seq. position

// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
void visokos_init(const unsigned long long a)
	//const unsigned long long b)
{
	
	god = a;
	 // see special case when initialized
}

// Produce the next value in the sequence.
// Returns true on success, false on overflow.
bool visokos_next()
{
	// check to see if we'd overflow result or position
	if (god % 4 == 0 && god % 100 != 0)
	{
		return true;
	}
	if (god % 4 != 0)
	{
		return false;
	}
	if (god % 4 == 0 && god % 100 == 0 && god % 400 == 0)
	{
		return true;
	}
	if (god % 4 == 0 && god % 100 == 0 && god % 400 != 0)
	{
		return false;
	}
	
		

	// Special case when index == 0, just return b value
	
}

// Get the current value in the sequence.
unsigned long long visokos_god()
{
	return god;
}

// Get the current index position in the sequence.
//unsigned fibonacci_index()
//{
//	return index_;
//}


