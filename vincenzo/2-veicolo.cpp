#include "1-veicolo.h"
#include <iostream>
using namespace std;

Veicolo::Veicolo(string m, int c):marca(m),cavalli(c){}
bool Veicolo::operator>(const Veicolo&v)
{
	return cavalli > v.cavalli;
}
bool Veicolo::operator<(const Veicolo&v)
{
	return cavalli < v.cavalli;
}
ostream& operator<<(ostream&out, const Veicolo&v)
{
	out << "Marca: "<<v.marca<< " - Cavalli: "<<v.cavalli<<endl;
	return out;
}
class Auto:public Veicolo
{
	public:
	Auto(string m,int c):Veicolo(m,c){}
};
class Moto:public Veicolo
{
	public:
	Moto(string m,int c):Veicolo(m,c){}
};
class Barca:public Veicolo
{
	public:
	Barca(string m,int c):Veicolo(m,c){}
};