#ifndef complejo
#include<iostream>
using namespace::std;
class complejo
	{
	public:
		complejo();	// constructor predeterminado
		complejo(double r,double i);   // constructor alterno
		complejo suma(const complejo &op); // metodo sumar
		complejo resta(const complejo &op);
		complejo dividir(const complejo &op);
		complejo multiplicar(const complejo &op);
		//operadores complejo complejo
		friend complejo operator+(const complejo &op, const complejo &op2);
		friend complejo operator-(const complejo &op, const complejo &op2);
		friend complejo operator*(const complejo &op, const complejo &op2);
		friend complejo operator/(const complejo &op, const complejo &op2);
		//operadores complejo double
		friend complejo operator+(const complejo &comp, const double &d);
		friend complejo operator-(const complejo &comp, const double &d);
		friend complejo operator*(const complejo &comp, const double &d);
		friend complejo operator/(const complejo &comp, const double &d);
		//operadores double complejo
		friend complejo operator+(const double &d, const complejo &comp);
		friend complejo operator-(const double &d, const complejo &comp);
		friend complejo operator*(const double &d, const complejo &comp);
		friend complejo operator/(const double &d, const complejo &comp);
		//operador del cout
		friend ostream &operator<<(ostream& out,const complejo &op);
		void imprimir();
	private:
		double real;	// para guardar la parte real
		double imag;	// para guardar la parte imaginaria
	};

#endif