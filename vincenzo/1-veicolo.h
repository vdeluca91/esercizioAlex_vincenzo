#ifndef VEICOLO_H
#define VEICOLO_H
#include <iostream>
using namespace std;
class Veicolo
{
	public:
		string marca;
		int cavalli;
		Veicolo(string m="Ferrari", int c=100);
		bool operator>(const Veicolo&v);
		bool operator<(const Veicolo&v);
		friend ostream& operator<<(ostream&out, Veicolo&v);
};

#endif