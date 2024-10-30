#include<iostream>
#include"./complejo.h"
using namespace::std;
complejo::complejo()
	{
		this->real=0.0;
		this->imag=0.0;
	}
complejo::complejo(double real, double imag){
	this->real=real;
	this->imag=imag;
}
complejo complejo::suma(const complejo &op)
{
	complejo res; // objeto aux para resultado
	res.real=this->real + op.real;
	res.imag=this->imag + op.imag;
	return res;
}
complejo complejo::resta(const complejo &op){
	complejo res;
	res.real=this->real-op.real;
	res.imag=this->imag-op.imag;
	return res;
}
complejo complejo::multiplicar(const complejo &op){
	complejo res;
	res.real=(this->real*op.real)-(this->imag*op.imag);
	res.imag=(this->real*op.imag)+(this->imag*op.real);
	return res;
}
complejo complejo::dividir(const complejo &op){
	complejo res;
	double cociente=((op.real*op.real)+(op.imag*op.imag));
	res.real=((this->real*op.real)+(this->imag*op.imag))/cociente;
	res.imag=((this->imag*op.real)-(this->real*op.imag))/cociente;
	return res;
}
void complejo::imprimir(){
	if(0<=this->imag){
		cout<<this->real<<"+"<<this->imag<<"i";
	}
	else if(0>this->imag){
		cout<<this->real<<this->imag<<"i";
	}
}
complejo operator+(const complejo &op, const complejo &op2){
	complejo res;
	res.real=op.real+op2.real;
	res.imag=op.imag+op2.imag;
	return res;
}
complejo operator-(const complejo &op, const complejo &op2){
	complejo res;
	res.real=op.real-op2.real;
	res.imag=op.imag-op2.imag;
	return res;
}
complejo operator*(const complejo &this1, const complejo &op){
	complejo res;
	res.real=(this1.real*op.real)-(this1.imag*op.imag);
	res.imag=(this1.real*op.imag)+(this1.imag*op.real);
	return res;
}
complejo operator/(const complejo &this1, const complejo &op){
	complejo res;
	double cociente=((op.real*op.real)+(op.imag*op.imag));
	res.real=((this1.real*op.real)+(this1.imag*op.imag))/cociente;
	res.imag=((this1.imag*op.real)-(this1.real*op.imag))/cociente;
	return res;
}
ostream &operator<<(ostream& out,const complejo &op){
	if(op.imag>=0){
		out<<op.real<<"+"<<op.imag<<"i";
	}
	else if (op.imag<0){
		out<<op.real<<op.imag<<"i";
	}
	return out;
}
complejo operator+(const complejo &comp, const double &d){
	complejo res;
	res.real=comp.real+d;
	res.imag=comp.imag;
	return res;
}
complejo operator-(const complejo &comp, const double &d){
	complejo res;
	res.real=comp.real-d;
	res.imag=comp.imag;
	return res;
}
complejo operator*(const complejo &comp, const double &d){
	complejo res;
	res.real=comp.real*d;
	res.imag=comp.imag*d;
	return res;
}
complejo operator/(const complejo &comp, const double &d){
	complejo res;
	res.real=comp.real/d;
	res.imag=comp.imag/d;
	return res;
}

complejo operator+(const double &d, const complejo &comp){
	complejo res;
	res.real=comp.real+d;
	res.imag=comp.imag;
	return res;
}
complejo operator-(const double &d, const complejo &comp){
	complejo res;
	res.real=comp.real-d;
	res.imag=comp.imag;
	return res;
}
complejo operator*(const double &d, const complejo &comp){
	complejo res;
	res.real=d*comp.real;
	res.imag=d*comp.imag;
	return res;
}
complejo operator/(const double &d, const complejo &comp){
	complejo res;
	double cociente=((comp.real*comp.real)+(comp.imag*comp.imag));
	res.real=(d*comp.real)/cociente;
	res.imag=(d*comp.imag)/cociente;
	return res;
}