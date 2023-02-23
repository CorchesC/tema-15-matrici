#pragma once
#include "functii.h"
using namespace std;

//ex3 \/
void sol1() {
	//(3b) Care este numarul de elemente din matrice ce au in componenta doar cifre binare?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrElementeCuCifreBinare(x, m, n);
	cout << "Numarul de elemente cu cifre binare din vector este: " << nr << endl;
}
void sol2() {
	//(3d) Afisati elementele matircei, pe o linie in ordinea din desen: (--> ; <--; -->)
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareSol2(x, m, n);
}
void sol3() {
	//(3e) Cate linii simetrice are matricea? O linie este simetrica daca elementele egal departate de capetele liniei sunt egale. Daca numarul are 5 cifre, cifra din mijloc va fi comparata cu ea insasi.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nrl = nrLiniiSimetrice(x, m, n);
	cout << "Numarul de linii simetrice in matrice este: " << nrl << endl;
}
void sol4() {
	//(3f) Sunt toate elementele prime intre ele cu rasturnatul lor?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	bool aff = toateElementeleDinMatricePrimeCuOgl(x, m, n);
	aff == true
		?
		cout << "Toate elementele din matrice sunt prime intre ele cu rasturnatul lor" << endl
		:
		cout << "Nu toate elementele din matrice sunt prime intre ele cu rasturnatul lor" << endl;
}