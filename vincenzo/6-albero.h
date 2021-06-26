#ifndef ALBERO_H 
#define ALBERO_H
#include <iostream>
#include "5-crealista.cpp"
using namespace std;
template <class H> class Foglia {
	private:
            H key;
			Foglia <H>* left, * right, * parent;
	public:
			void setLeft( Foglia <H>* p){ this->left = p;}
			void setRight (Foglia <H>* p){ this->right = p; }
			void setParent (Foglia <H>* p ){ this->parent = p; }
			void setKey (H p){ this->key = p; }
			Foglia <H>* getLeft()const{ return this->left;}
			Foglia <H>* getRight()const{ return this->right;}
			Foglia <H>* getParent()const{ return this->parent;}
			H getKey()const{ return this->key;}
			Foglia(H p): key(p),left(nullptr),right(nullptr),parent(nullptr){};
};
template<class T> class Albero {
    private:
        Foglia<T> * root;
        string tipo;
		void _PreOrder(Foglia<T>* aux){
			if(aux){
                cout<<aux->getKey()<<" ";
				_PreOrder(aux->getLeft());
				_PreOrder(aux->getRight());
			}
		}
 		void _inOrder(Foglia<T>* aux){
			if(aux){
				_inOrder(aux->getLeft());
				cout<<aux->getKey()<<" ";
				_inOrder(aux->getRight());
			}       
		}
 		void _PostOrder(Foglia<T>* aux){
			if(aux){
				_PostOrder(aux->getLeft());
				_inOrder(aux->getRight());
                cout<<aux->getKey()<<" ";
			}
		}

        Foglia<T>* _search(T x){
			Foglia<T>* aux=root;
			while(aux!=nullptr){
				if(x < aux->getKey()){
					aux=aux->getLeft();
				}
				else if(x > aux->getKey()){
					aux=aux->getRight();
				}
				else{
					return aux;
				}
			}
			return 0;
		}
		Foglia<T>* _min(Foglia<T>* aux){
			while(aux!=nullptr && aux->getLeft()){
				aux=aux->getLeft();
			}
			return aux ? aux : nullptr;
		}

        void trapianta(Foglia<T>*u,Foglia<T>*v){
            if(u->getParent()==nullptr) root=v;
            else if(u == u->getParent()->getLeft())
            u->getParent()->setLeft() = v;
            else u->getParent()->setRight() = v;
            if(v!=nullptr) v->setParent() = u->getParent();
        }

    public:
        Albero(string x):tipo(x),root(nullptr){} //ok
        Foglia<T>* getRadice() const { return this->root; }//ok

        Albero<T>* ins(T val);//ok
        Albero<T>* canc(Foglia<T>* p);
        void cancPerValore(int c);
        void stampaPreorder();//ok ->inorder
        void stampaInorder();//ok ->inorder
        void stampaPostorder();//ok ->inorder

        int altezza(Foglia<T>*)const;
        void stampaLivello(Foglia<T>*, int)const;

        template <class U> friend
        ostream& operator<< (ostream& out, const Albero<U>& A);
};
#endif
