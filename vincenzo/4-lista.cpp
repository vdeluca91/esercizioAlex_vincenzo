#include "3-lista.h"
#include <iostream>
using namespace std;

template <class T> Lista<T>::Lista(string x):tipo(x),testa(nullptr){}

template <class T> Nodo<T>* Lista<T>::gettesta(){return testa;}

template <class T> void Lista<T>::inserisci(T x)
{
 Nodo<T>* nuovo=new Nodo<T>(x);	

 Nodo<T>* iter=testa;
 
 if(testa==nullptr)
  testa=nuovo;
 	
 else
 {
  while(iter->succ!=nullptr)
   iter=iter->succ;
  
  iter->succ=nuovo;	
 }
}

template<class T>
ostream& operator << (ostream& out,const Lista<T>& L)
{
	out<<" <-- Lista --> " << L.tipo << endl;
	if ( L.gettest() == nullptr )
	{
		out << "Errore ! La lista e' vuota ! "<< endl;
	}
	else
	{
		Nodo<T> * iter = L.gettesta();
		while(iter!=nullptr)
		{
			out<< iter->valore<<" ";
			iter = iter->succ;
		}
		/*
  for(Nodo<T>* iter=L.testa; iter!=nullptr; iter=iter->succ)
   out<<iter->valore;		
		*/
	}
	return out;
}