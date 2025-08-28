#include <iostream>
#include <limits>

auto Abs(int _Num) -> int
{
	if(_Num == ::std::numeric_limits<int>::min()){
		throw ::std::overflow_error("Abs: Cannot negate INT_MIN");
	}
	if(_Num >= 0){ return(_Num); }
	else{ return(-_Num); }
}