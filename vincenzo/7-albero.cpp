#include "6-albero.h"
#include <iostream>
using namespace std;

template<class T> void Albero<T>::stampaPreorder() {
    Foglia<T>* temp = getRadice();

    _PreOrder(temp);
}
template<class T> void Albero<T>::stampaInorder() {
    Foglia<T> * temp = getRadice();

    _inOrder(temp);
}
template<class T> void Albero<T>::stampaPostorder() {
    Foglia<T>* temp = getRadice();

    _PostOrder(temp);
}

template<class T> Albero<T>* Albero<T>::ins(T val) {
    Foglia<T> * iter = getRadice();
    Foglia<T> * nuovo = new Foglia<T>(val);
    Foglia<T> * y = nullptr; 
    cout << "nuovo->getKey() has type: " << typeid(nuovo->getKey()).name() << '\n';
    cout << "VAL has type: " << typeid(val).name() << '\n';
    // cout<< " val.cavalli "<< val.cavalli<<endl;
    // cout<< " nuovo->getKey() "<< nuovo->getKey()<<endl;   
    // cout<< " nuovo->getKey().cavalli "<< nuovo->getKey().cavalli<<endl;   
    // VAL.CAVALLI = nuovo->getKey().cavalli
    if (iter == nullptr)
    {
        iter = nuovo; 
        return nullptr;
    }    
    while (iter != nullptr) {
        y = iter;
        if ( val < y->getKey() )
        {

            iter = iter->getLeft(); 

        } 
        else
        {
            iter = iter->getRight();
        }
    }
    nuovo->setParent(iter);
    if (y==nullptr) root=nuovo; 
	else if (val < y->getKey()) y->setLeft(nuovo); 
	else y->setRight(nuovo); 
    
    return this;
}

template <class T> int Albero<T>::altezza(Foglia<T>* p) const
{
    if(p == nullptr) return 0;
    else
    {
        int SxHeight = altezza(p->getLeft());
        int DxHeight = altezza(p->getRight());
        if( SxHeight>DxHeight ) return SxHeight +1;  
        else return DxHeight+1;
    }	
}
template <class T> void Albero<T>::stampaLivello(Foglia<T>* p, int livello)const
{
    if(p == nullptr)
    {
        cout << "_\t";
        return;
    }

    if(livello==0)
        cout<< p->getKey() << "\t";

    else if(livello>0)
    {
        stampaLivello(p->getLeft(), livello-1);
        stampaLivello(p->getRight(), livello-1);
    }		
}
template <class U> ostream& operator << (ostream& out, const Albero<U>& A)
{
  int h = A.altezza(A.getRadice());

 if(h==0)
    out<<"Errore! Albero spoglio!"<<endl;
 else
    for(int i=0;i<h;i++)
    {
        A.stampaLivello(A.getRadice(),i);
        out<< endl;
    }

 return out;	
}	

