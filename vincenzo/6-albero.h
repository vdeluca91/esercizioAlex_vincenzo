#ifndef ALBERO_H 
#define ALBERO_H
#include <iostream>
#include "5-crealista.cpp"
using namespace std;
template<class H>
class Foglia{
    private:
        H valore;
        Foglia<H> * left;
        Foglia<H> * right;
        Foglia<H> * padre;
    public:
        Foglia(H val):valore(val),left(nullptr),right(nullptr),padre(nullptr){}
        Foglia<H>* getPadre const(){ return this->padre; }
        Foglia<H>* getLeft  const(){ return this->left; }
        Foglia<H>* getRight const(){ return this->right; }
        H* getValore const (){return this->valore;}
        void setLeft(Foglia<H>* left)	{this->left=left;}
        void setRight(Foglia<H>* right){this->right=right;}
        void setPadre(Foglia<H>* padre){this->padre=padre}
        void setValore(Foglia<H>* valore){this->valore=valore;}
};
template<class T>
class Albero
{
    private:
        Foglia<T> * root;
        string tipo;
        void inorder(Foglia<T>*p);
        Foglia<T>* _Min(T x);
        void trapianta(Foglia<T>*u,Foglia<T>*v);
    public:
        Albero(string x);
        Foglia<T>* getRadice()const; 
        Foglia<T>* ricerca(int c)const;
        int altezza(Foglia<T>*)const;
        void ins(T val);
        void canc(Foglia<T>* p);
        void cancPerValore(int c);
        void stampaLivello(Foglia<T>*, int)const;
        template <class U> friend
        ostream& operator<< (ostream& out, const Albero<U>& A);
};
#endif
