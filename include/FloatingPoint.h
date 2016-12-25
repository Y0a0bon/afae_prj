#ifndef DEF_FLOATINGPOINT
#define DEF_FLOATINGPOINT

class FloatingPoint
{
    public:

	// Constructor
	FloatingPoint();
	FloatingPoint(int mant, int exp, int p);
	
    float get_significant();
	unsigned int ulp();
	unsigned int uls();
	
	void fp_2Sum(FloatingPoint y, FloatingPoint * s, FloatingPoint * e);
	void fp_2MulFMA(FloatingPoint y, FloatingPoint * s, FloatingPoint * e);
	void fp_VecSum(FloatingPoint * y, FloatingPoint ** e);
	
	void rn_add(FloatingPoint a, FloatingPoint b);
	void rn_sub(FloatingPoint a, FloatingPoint b);
	void rn_mul(FloatingPoint a, FloatingPoint b);
	void fma(FloatingPoint a, FloatingPoint b, FloatingPoint c);
	
	unsigned int get_trailing_zeros();
	bool is_zero();
	
	// getters and setters
	int get_mant();
	void set_mant(int new_mant);
	int get_exp();
	void set_exp(int new_exp);
	unsigned int get_p();
	void set_p(unsigned int new_p);
	
	// Destructor
	~FloatingPoint();

    private:

    int mant;			// Mantissa M_x
	int exp;			// Exponent e_x
	unsigned int p;		// precision
};

#endif