#ifndef LISTA_H 
#define LISTA_H
#include <iostream>
#include "2-veicolo.cpp"
using namespace std;

template <class T>
class Nodo
{
	public:
		T valore;
		Nodo* succ;
		Nodo(T x):valore(x),succ(nullptr){}
};

template <class T>
class Lista
{
 private:
 	
  Nodo<T>* testa;
  string tipo;
  
 public:
 	
  Lista(string x);//:tipo(x),testa(nullptr){}
  
  Nodo<T>* gettesta(){ return testa; }
  
  
  void inserisci(T);
	
  template <class T> 
  friend
  std::ostream& operator << (std::ostream& out,const Lista<T>& L);
};

#endif
