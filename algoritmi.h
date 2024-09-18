#pragma once
#include <iostream>
#include <string.h>
using namespace std;

void afisareMatrice(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

// BAC 2023

// Sesiune August 

// Matematica Informatica

void patratPerfect(int a[100][100], int n,int m) {
	
	int suma = 0;
	int sumaPpMax = 0;

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < m-1; j++) {

			suma = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
			if (suma > sumaPpMax) {
				sumaPpMax = suma;
			}
		}
	}

	cout << sumaPpMax << endl;

}

// Stiinte ale Naturii

void perecheDeValoareP(int v[], int dim) {

	int suma = 0;
	int sumaMax = 0;

	for (int i = 0; i < dim-1; i++) {

		suma = v[i] + v[i + 1];

		if (suma > sumaMax) {
			sumaMax = suma;
		}
	}
	cout << sumaMax << endl;
}


// Sesiune Speciala 

// Matematica Informatica

void matrice11(int a[100][100], int n) {

	for (int j = 0; j < n; j++) {

		cin >> a[0][j];
		cout << endl;
	}

	for (int i = 1; i < n; i++) {

		for (int j = 0; j < n ; j++) {

			if (i + j > n - 1) {

				a[i][j] = -1;

			}
			else {

				a[i][j] = (a[i - 1][j] + a[i - 1][j + 1]) % 100;



			}

		}
	}
}


// BAC 2024

// Sesiune August 

// Matematica Informatica

void  bubbleSortDesc(int v[], int dim) {


	bool sortat = false;
	do {
		sortat = true;
		for (int i = 0; i < dim - 1; i++) {

			if (v[i] < v[i + 1]) {
				int aux = v[i+1];
				v[i+1] = v[i];
				v[i] = aux;
				sortat = false;
			}
		}

	} while (sortat == false);



}

void sirNrMaxZ(int v[], int dim,int z) {

	for (int i = 0; i < dim; i++) {

		if (v[i] < z) {

			bubbleSortDesc(v, dim);

			cout << v[i] << " ";
		}

	}

}






// BAC 2018

// Sesiune August 

// Matematica Informatica

void matrice1(int a[100][100], int n, int sir[]) {

	for (int j = 0; j < n; j++) {

		if (j % 2 == 0) {
			for (int i = n - 1; i >= 0; i--) {
				a[i][j] = sir[n - i - 1];
			}
		}
		else {
			for (int i = 0; i < n; i++) {
				a[i][j] = sir[i];
			}
		}

	}


}

void sirNrDesc(int v[], int dim,int x,int y) {

	for (int i = 0; i < dim; i++) {

		if (x < y) {

			if (v[i] <= y) {

				cout << v[i] << " ";
			}

		}

	}

}

// Stiinte ale Naturii

void matrice2(int a[100][100], int n, int sir[]) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = sir[n - j - 1];

		}
	}

}

void sirNrDesc2(int v[], int dim, int x) {

	for (int i = 0; i < dim; i++) {

		if (v[i] <= x) {

			cout << v[i] << " ";
		}

	}

}

// Sesiune Iunie-Iulie

// Matematica Informatica 

void matrice3(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][i] = 0;

			a[i][n - i - 1] = 0;

			if (i < j && i + j < n - 1) {
				a[i][j] = i + j;
			}

			if (i > j && i + j < n - 1) {
				a[i][j] = (i + j);
			}

			if (i > j && i + j > n - 1) {
				a[i][j] = (i + j)%8;
			}

			if (i < j && i + j > n - 1) {
				a[i][j] = (i + j) % 8;
			}

		}
	}
}

// Stiinte ale Naturii

void matrice10(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][i] = 0;

			a[i][n - i - 1] = 0;

			if (i < j && i + j < n - 1) {
				a[i][j] = i + j;
			}

			if (i > j && i + j < n - 1) {
				a[i][j] = (i + j);
			}

			if (i > j && i + j > n - 1) {
				a[i][j] = (i + j) % 8;
			}

			if (i < j && i + j > n - 1) {
				a[i][j] = (i + j) % 8;
			}

		}
	}
}

// Sesiune Speciala

// Matematica Informatica 

void matrice4(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = min(i, j)+1;
		}
	}
}

void secventaIncadatra(int v[], int dim) {

	int lungime = 0;

	int lungimeMax = 0;

	for (int i = 0; i < dim; i++) {
		for (int j = i; j < dim; j++) {
			if (v[i] = v[j]) {
				lungime = j - i + 1;
			}
			if (lungime > lungimeMax) {
				lungimeMax = lungime;
			}
		}
	}
	cout << lungimeMax << endl;
}



// BAC 2017

// Sesiune August 

// Matematica Informatica

void inserareLinie(int a[100][100], int& n, int m, int linie) {

	for (int i = n; i > linie; i--) {
		for (int j = 0; j < m; j++) {
			a[i][j] = a[i - 1][j];
		}
	}
	n++;
}

void matrice5(int a[100][100], int& n,int m) {

	int media[100] = {};

	for (int j = 0; j < m; j++) {

		int suma = 0;

		for (int i = 0; i < n; i++) {
			suma += a[i][j];
		}
		media[j] = suma / n;
	}

	int linMij = n / 2;

	inserareLinie(a, n, n, linMij);

	for (int j = 0; j < n; j++) {
		a[linMij][j] = media[j];
	}

}

//Stiinte ale naturii

void matrice7(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = abs(i + j)/2;
		}
	}

}

void inserareElementPoz(int v[], int& dim, int p, int elem) {

	for (int i = dim - 1; i >= p; i--) {

		v[i + 1] = v[i];
	}
	v[p] = elem;
	dim++;

}

void maSir(int v[], int& dim) {

	int suma = 0;
	int ma = 0;

	for (int i = 0; i < dim; i++) {

		suma += v[i];
	}

	ma = suma / dim;

	inserareElementPoz(v, dim, dim / 2, ma);

}



// Sesiune Iunie 

// Matematica Informatica

void matrice6(int a[100][100], int n,int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i == 0 || i == n - 1 || j == 0 || j == m-1) {
				a[i][j] = 5;
			}

		}
	}

}

void secventaPara(int v[], int dim) {
	int ct = 0;
	int lungimeMaxima = 0;

	for (int i = 0; i < dim; i++) {

		for (int j = i; j < dim; j++) {

			if (v[j] % 2 == 0) {
				ct++;
				lungimeMaxima = j - i + 1;
			}
		}

	}
	cout << " Numarul de secventa cu elemente pare este " << ct << " iar lungimea maxima este " << lungimeMaxima << endl;

}

//Stiinte ale naturii

void matrice8(int a[100][100], int n,int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = 2;
			}

		}
	}

}

void afisareVectorNenule(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (v[i] != 0) {
			cout << v[i] << " ";
		}
	}

}


void secventaPara1(int v[], int dim) {

	int ct = 0;
	bool secventaPara = false;
	int lungimeSecventa = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0) { 
			lungimeSecventa++;
			if (lungimeSecventa == 2) {
				ct++;
				secventaPara = true;
			}
		}
		else {
			lungimeSecventa = 0;
			secventaPara = false;
		}
	}

	cout << ct << endl;

}