#ifndef complejo
class complejo
	{
	public:
		complejo();	// constructor predeterminado
		complejo(double r,double i);   // constructor alterno
		complejo suma(const complejo &op); // metodo sumar
		complejo resta(const complejo &op);
		complejo dividir(const complejo &op);
		complejo multiplicar(const complejo &op);
		void imprimir();
	private:
		double real;	// para guardar la parte real
		double imag;	// para guardar la parte imaginaria
	};

#endif