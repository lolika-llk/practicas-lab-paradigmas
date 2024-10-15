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
		if(1==this->imag){
			cout<<this->real<<"+"<<"i"<<endl;
		}
		else if(-1==this->imag){
			cout<<this->real<<"-"<<"i"<<endl;
		}
		else{
			cout<<this->real<<"+"<<this->imag<<"i"<<endl;
		}
	}