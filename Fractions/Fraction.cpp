#include <iostream>
using namespace std;

class Fraction
{
	Fraction ();
	
	void setfraction(int upper, int lower)
	{
		numerator = upper;
		denominator = lower;
	};
	
	int getnumerator()
	{
		return numerator;
	};

	int getdenominator()
	{
		return denominator;

	};
	
	void displayfraction(Fraction X)
	{
		char slash;
			cout << X.getnumerator() << slash << X.getdenominator();

	};

	Fraction Multiply(Fraction A, Fraction B)
	{ 
		int num, den;
		Fraction temp;
		num = A.getnumerator()*B.getnumerator();
		den = A.getdenominator()*B.getdenominator();
		temp.setfraction(num, den);
		return temp;
  };
	Fraction Divide(Fraction A, Fraction B)
  {
	    int num, den;
	    Fraction temp;
	    num = A.getnumerator()*B.getdenominator();
	    den = A.getdenominator()*B.getnumerator();
	    temp.setfraction(num, den);
	    return temp;
	}; 

	Fraction Add(Fraction A , Fraction B)

	{
		int num, den;
		Fraction temp;
		num = (A.getnumerator()*B.getdenominator()) + (B.getnumerator()*A.getdenominator());
		den = A.getdenominator()*B.getdenominator();
		temp.setfraction(num, den);
		return temp;
	};
	Fraction Substract(Fraction A, Fraction B)
	{
		int num, den;
		Fraction temp;
		num = (A.getnumerator()*B.getdenominator()) - (B.getnumerator()*A.getdenominator());
		den = A.getdenominator()*B.getdenominator();
		temp.setfraction(num, den);
		return temp;
	};


private:
	int numerator;
	int denominator;
};


int main()
{
	Fraction f();
	char slash;
	int top;
    int bottom;
	cout<< " Enter the first fraction\n\n\n";
	cin >> top >> slash >> bottom;

	f.setfraction(top , bottom);

}