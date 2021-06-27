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
		bool operator>(const Veicolo&v) const;
		bool operator<(const Veicolo&v) const;
		friend ostream& operator<<(ostream&out, const Veicolo& v);
};

#endif