#include "4-lista.cpp"
#include <iostream>
using namespace std;

void CreaListe(Lista<Auto>& A,Lista<Moto>& M, Lista<Barca>& B, int n )
{
	char scelta; string m; int c;
	
	for (int i = 0; i<n; i++)
	{
		do
		{
			cout<<" inserisci 'A'(Auto),'B'(Barca) oppure 'M'(Moto): ";
			cin>>scelta;
		}while( scelta != 'A' || scelta != 'B' || scelta != 'M'  );
		
		cout<<"Inserisci la marca ed i cavalli del veicolo come nell'esempio -> Ferrari 100"<<endl;
		cin>> m >> c;
		
		
		
		switch(scelta)
		{
				case 'A':
					   	A.inserisci({m,c});
				break;
				case 'B':
						B.inserisci({m,c});
				break;
				case 'M':
						M.inserisci({m,c});
				break;				
		}
		  cout<<endl<<endl;
	}

}