#include "5-crealista.cpp"
#include <iostream>
using namespace std;
 
int main()
{
 int n;
 
	Lista<Auto> A("Auto");
	Lista<Moto> M("Moto");
	Lista<Barca> B("Barche"); 
 	 		 	
 	 		 	
 cout<<"Quanti oggetti veicolo vuoi creare? ";
 cin>>n; cout<<endl;
 
 CreaListe(A,M,B,n);
 	
cout<< A <<endl;
 
 cout<< B <<endl;
 
 cout<< M <<endl; 
	 
	return 0;
}
 
 
