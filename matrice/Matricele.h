#pragma once

extern int matriceaA[1000][1000];
extern int matriceaB[1000][1000];

//rezultatul
extern int matriceaC[1000][1000];

//dimensiunile matricelor
extern int iA, jA;
extern int iB, jB;

void afiseazaMeniu() {
	cout << "Ce doriti sa faceti?"					<< endl;
	cout << "1 - seteaza dimensiunea matricei A"	<< endl;
	cout << "2 - vizualiza matricea A"				<< endl;
	cout << "3 - seteaza dimensiunea matricei B"	<< endl;
	cout << "4 - vizualiza matricea B"				<< endl;
	cout << "5 - incarca matricea A"				<< endl;
	cout << "6 - incarca matricea B"				<< endl;
	cout << "+ - A + B = ?"							<< endl;
	cout << "- - A - B = ?" << endl;
	cout << "x - A x B = ?"							<< endl;
	cout << "y - B x A = ?"							<< endl;
	cout << "0 - inchide aplicatia"					<< endl;
	cout << "Din start matricele contin cifra 1, dimensiunea lor 2x2" << endl;
}

void dimensiuneaA() {
	cout << "matricea A[i][j]" << endl;
	
	
	cout << "[i] = ";
	cin >> iA;
		//scanf_s("%d", marimeaA[0]);

	cout << "[j] = ";
	cin >> jA;
		//scanf_s("%d", marimeaA[1]);
	cout << endl;
}

void dimensiuneaB() {
	cout << "matricea B[i][j]" << endl;


	cout << "[i] = ";
	cin >> iB;
	//scanf_s("%d", marimeaA[0]);

	cout << "[j] = ";
	cin >> jB;
	//scanf_s("%d", marimeaA[1]);
	cout << endl;
}

void vizualizaMatriceaA() {
	cout << endl;
	for (int i = 0; i < iA; i++)
		for (int j = 0; j < jA; j++) {
			cout << "\t" << matriceaA[i][j];
			if (j == jA-1)
				cout << endl;
		}
	cout << endl;
}

void vizualizaMatriceaB() {
	cout << endl;
	for (int i = 0; i < iB; i++)
		for (int j = 0; j < jB; j++) {
			cout << "\t" << matriceaB[i][j];
			if (j == jB - 1)
				cout << endl;
		}
	cout << endl;
}


void citesteMatriceaA() {
	cout << endl;
	for (int i = 0; i < iA; i++)
		for (int j = 0; j < jA; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> matriceaA[i][j];

		}
	cout << endl;
}

void citesteMatriceaB() {
	cout << endl;
	for (int i = 0; i < iB; i++)
		for (int j = 0; j < jB; j++) {
			cout << "B[" << i << "][" << j << "] = ";
			cin >> matriceaB[i][j];

		}
	cout << endl;
}

void matricePlus() {
	if ((iA != iB) || (jA != jB)) {
		cout << "matricele nu sunt de aceasi dimensiune";
	}
	else {
		cout << " A x B" << endl;
		for (int i = 0; i < iA; i++)
			for (int j = 0; j < jA; j++) {

				cout << "\t" << matriceaA[i][j] + matriceaB[i][j];
				if (j == jA - 1)
					cout << endl;
			}	
	}
}

void matriceMinus() {
	if ((iA != iB) || (jA != jB)) {
		cout << "matricele nu sunt de aceasi dimensiune";
	}
	else {
		cout << " A x B" << endl;
		for (int i = 0; i < iA; i++)
			for (int j = 0; j < jA; j++) {

				cout << "\t" << matriceaA[i][j] - matriceaB[i][j];
				if (j == jA - 1)
					cout << endl;
			}
	}
}


void inmultireMatrice() {
	int suma = 0;
	int sumatotala[100][100];
	if (jA != iB)
		cout << "!!!Matricele nu pot fi inmultite" << endl;
	else
	{
		for (int i = 0; i < iA; i++) {
			for (int j = 0; j < jB; j++) {
				for (int k = 0; k < iB; k++) {
					suma = suma + matriceaA[i][k] * matriceaB[k][j];
				}
				sumatotala[i][j] = suma;
				suma = 0;
				cout << " " << sumatotala[i][j];
			}
			cout << endl;
		}

		
	}
}