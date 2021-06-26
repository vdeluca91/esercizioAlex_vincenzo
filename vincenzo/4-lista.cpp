#include "3-lista.h"
#include <iostream>
#include <string.h>
using namespace std;

template<class T>Lista<T>::Lista(string x): tipo(x),testa(nullptr){}
template<class T>Nodo<T>* Lista<T>::gettesta()const{ return this->testa; }
template<class T>void Lista<T>::inserisci(T val)
{
  Nodo<T> *nuovo= new Nodo<T>(val);
  Nodo<T> *iter=testa;
  if(testa==nullptr)
  {
      testa=nuovo;
  }
  else
    {
        while(iter->succ!=nullptr) //in questo caso so per certo che la testa esiste! Quindi controllo il succ,
                                        //Nel caso base dove ho solo la testa il suo succ è sicuramente nullpt
                                    //quindi non entro nel ciclo while ed assegno il nuovo nodo al succ di testa
        {
            iter=iter->succ;
        }
    iter->succ=nuovo;
  }
}
 template<class T> ostream & operator<<(ostream &out, const Lista<T> & l)
 {

     out<<" Lista" <<l.tipo<<endl;
     if(l.gettesta()==nullptr)
     {
         out<<" Errore ! la lista e' vuota"<<endl;
     }
     else
        {
            Nodo<T> * iter = l.gettesta();
            while(iter!=nullptr)
            {
                out<<iter->valore<<" "<<endl;
                iter=iter->succ;
            }
     }
     return out;
 }