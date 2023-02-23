#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
void afisare(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
bool numarCuCifreBinare(int n) {
	bool aff = false;
	while (n != 0) {
		int cifra = n % 10;
		if (cifra == 0 || cifra == 1) {
			aff = true;
		}
		else {
			return false;
		}
		n = n / 10;
	}
	return aff;
}
int nrElementeCuCifreBinare(int x[100][100], int& m, int& n) {
	int nr = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (numarCuCifreBinare(x[i][j]) == true) {
				nr++;
			}
		}
	}
	return nr;
}
void afisareSol2(int x[100][100], int& m, int& n) {
	int cst = 0;
	for (int i = 0; i < m; i++) {
		if (cst == 0) {
			for (int j = 0; j < n; j++) {
				cout << x[i][j] << " ";
			}
			cst = 1;
		}
		else if (cst == 1) {
			for (int f = n-1; f >= 0; f--) {
				cout << x[i][f] << " ";
			}
			cst = 0;
		}
	}
	cout << endl;
}
int nrLiniiSimetrice(int x[100][100], int& m, int& n) {
	int nr = 0;
	for (int i = 0; i < m; i++) {
		bool aff = false;
		for (int j = 0; j < (n-1)/2; j++) {
			for (int f = n; f > (n - 1) / 2; f--) {
				if (x[i][j] == x[i][f]) {
					aff = true;
				}
				else {
					aff = false;
				}
			}
		}
		if (aff == true) {
			nr++;
		}
	}
	return nr;
}
int oglindit(int n) {
	int ogl = 0;
	while (n != 0) {
		int cifra = n % 10;
		ogl = ogl * 10 + cifra;
		n = n / 10;
	}
	return ogl;
}
int celMaiMareDivComun(int a, int b) {
	int dmaxA = -1;
	int dmaxB = -1;
	int dmaxCOM = 0;
	int x1 = 1;
	int x2 = 1;
	for (x1 = 1, x2 = 1; x1 <= a, x2 <= b; x1++, x2++) {
		if (a % x1 == 0) {
			if (x1 > dmaxA) {
				dmaxA = x1;
			}
		}
		if (b % x2 == 0) {
			if (x2 > dmaxB) {
				dmaxB = x2;
			}
		}
		if (dmaxA == dmaxB) {
			dmaxCOM = dmaxA;
		}
	}
	return dmaxCOM;
}
bool nrPimCuOgl(int n) {
	int ogl = oglindit(n);
	if (celMaiMareDivComun(n, ogl) == 1) {
		return true;
	}
	else {
		return false;
	}
}
bool toateElementeleDinMatricePrimeCuOgl(int x[100][100], int& m, int& n) {
	bool aff = false;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < (n - 1) / 2; j++) {
			if (nrPimCuOgl(x[i][j]) == true) {
				aff = true;
			}
			else {
				return false;
			}
		}
	}
	return aff;
}