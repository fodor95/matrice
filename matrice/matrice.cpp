// matrice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matricele.h"

int matriceaA[1000][1000];
int matriceaB[1000][1000];

//rezultatul
int matriceaC[1000][1000];

//dimensiunile matricelor
int iA=2, jA=2;
int iB=2, jB=2;




int main()
{

	matriceaA[0][0] = 2;
	matriceaA[0][1] = 2;
	matriceaA[1][0] = 2;
	matriceaA[1][1] = 2;

	matriceaB[0][0] = 2;
	matriceaB[0][1] = 2;
	matriceaB[1][0] = 2;
	matriceaB[1][1] = 2;

	int suma = 0;
	int sumatotala[100][100];

	char chrComandaSelectata = '0';
	

	do {
		system("CLS");
		cout << "comanda anterioara" << chrComandaSelectata << endl;
		

		afiseazaMeniu();
		switch (chrComandaSelectata)
		{
			case '1': 
				//"1 - seteaza dimensiunea matricei A
				cout << "Setarea dimensiunii a matricei A" << endl;
				dimensiuneaA();
				cout << "Dimensiunea selectata cu succes!" << endl;
				break;
			case '2':
				//"2 - vizualiza matricea A"
				vizualizaMatriceaA();
				break;
			case '3':
				//"3 - seteaza dimensiunea matricei B"
				dimensiuneaB();
				break;
			case '4':
				//4 vizualiza matricea B
				vizualizaMatriceaB();
				break;
			case '5':
				//incarca matricea A
				citesteMatriceaA();
				break;
			case '6':
				//incarca matricea B
				citesteMatriceaB();
				break;
			case '+':
				// A + B
				matricePlus();
				break;
			case '-':
				// A-B
				matriceMinus();
				break;
			case 'x':
				// a x b
				inmultireMatrice();
				

				break;
			case 'y':
				// b x a

				break;
			default:

				break;
		}
		cin >> chrComandaSelectata;

	} while (chrComandaSelectata != '0');
    
	return 0;
}




