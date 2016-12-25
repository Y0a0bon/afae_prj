#include "FloatingPoint.h"

#include <cmath>

using namespace std;


FloatingPoint::FloatingPoint() : mant(0),
exp(0), p(0)
{
	
}

FloatingPoint::FloatingPoint(int i_mant, int i_exp, int i_p) :
mant(i_mant), exp(i_exp), p(i_p)
{
	
}

float FloatingPoint::get_significant(){
	return get_mant() * this->ulp();
}

unsigned int FloatingPoint::ulp(){
	return ( 1 << (this->get_exp() - this->get_p() + 1) );
}
unsigned int FloatingPoint::uls(){
	return this->ulp() * this->get_trailing_zeros();
}

void FloatingPoint::fp_2Sum(FloatingPoint y, FloatingPoint * s, FloatingPoint * e){}
void FloatingPoint::fp_2MulFMA(FloatingPoint y, FloatingPoint * s, FloatingPoint * e){}
void FloatingPoint::fp_VecSum(FloatingPoint * y, FloatingPoint ** e){}

void FloatingPoint::rn_add(FloatingPoint a, FloatingPoint b){}
void FloatingPoint::rn_sub(FloatingPoint a, FloatingPoint b){}
void FloatingPoint::rn_mul(FloatingPoint a, FloatingPoint b){}
void FloatingPoint::fma(FloatingPoint a, FloatingPoint b, FloatingPoint c){}

unsigned int FloatingPoint::get_trailing_zeros(){
	if ( this->is_zero() ) {
		return -1;
	}
	
	unsigned int count = 0;
	int x = this->get_mant();
	
	while (x % 2 == 0) {
		count++;
		x >>= 1;
	}
	
	return count;
}


bool FloatingPoint::is_zero(){
	if(get_mant() == 0)
		return true;
	return false;
}


// getters and setters
int FloatingPoint::get_mant(){
	return mant;
}

void FloatingPoint::set_mant(int new_mant){
	mant = new_mant;
}

int FloatingPoint::get_exp(){
	return exp;
}

void FloatingPoint::set_exp(int new_exp){
	exp = new_exp;
}

unsigned int FloatingPoint::get_p(){
	return p;
}

void FloatingPoint::set_p(unsigned int new_p){
	p = new_p;
}

// Destructor
FloatingPoint::~FloatingPoint()
{
	
}
