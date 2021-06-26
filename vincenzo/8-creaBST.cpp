#include "7-albero.cpp"
#include <iostream>
using namespace std;

void CreaAlberi(Lista<Auto>& A,Lista<Moto>& M,Lista<Barca>& B,Albero<Auto>& A1,Albero<Moto>& M1,Albero<Barca>& B1)
{
 Nodo<Auto>* iter1 = A.gettesta();
 Nodo<Barca>* iter2 = B.gettesta();
 Nodo<Moto>* iter3 = M.gettesta();
 while(iter1!=nullptr)
 {
  A1.ins(iter1->valore);
  iter1 = iter1->succ;
 }

 while(iter2!=nullptr)
 {
  B1.ins(iter2->valore);
  iter2 = iter2->succ;
 }
	
 while(iter3!=nullptr)
 {
  M1.ins(iter3->valore);
  iter3 = iter3->succ;
 }
}

