#include "8-creaBST.cpp"
#include <iostream>
using namespace std;
 
int main()
{
 int n;
 
	Lista<Auto> A("Auto");
	Lista<Moto> M("Moto");
	Lista<Barca> B("Barche"); 
 	Albero<Auto>  A1("Auto"); Albero<Moto> M1("Moto"); Albero<Barca> B1("Barche");	 	
 	 		 	
	cout<<"Quanti oggetti veicolo vuoi creare? ";
	cin>>n; cout<<endl;
 
 CreaListe(A,M,B,n);
 	
cout<< A <<endl;
// cout<< B <<endl;
// cout<< M <<endl; 
CreaAlberi(A,M,B,A1,M1,B1);
// A1.stampaPreorder();
//A1.stampaInorder();
// A1.stampaPostorder();
cout<<"|Albero Auto|"<<endl<< A1 <<endl;
// cout<<"|Albero Moto|"<<endl<< M1 <<endl;
// cout<<"|Albero Barche|"<<endl<< B1 <<endl;
 
	return 0;
}
 
 
