#include "algoritmi.h"

void sol1() {

    int x[100][100] = { {1,1,2,30},{3,10,1,2,},{1,13,12,1},{1,2,3,1},{7,1,20,1} };

    int n = 5;

    int m = 4;

    patratPerfect(x, n, m);

    afisareMatrice(x, n, m);

}

void sol2() {

    int v[100] = {1,12,11,1,14,4,2,6};

    int dim = 8;

    perecheDeValoareP(v,dim);


}

void sol3() {

    int v[100] = { 0,0,1,4,13,38,105,280,729 };

    int dim = 9;

    sirNrMaxZ(v, dim,300);


}

void sol4() {

    int a[100][100] ={};

    int sir[100] = { 7,2,5,3 };

    int n = 4;

    matrice1(a, n, sir);
    afisareMatrice(a, 4, 4);


}

void sol5() {

    int v[100] = {0,3,8,15,24,35,48,63,80 };

    int dim = 9;


    bubbleSortDesc(v, dim);

    sirNrDesc(v, dim, 48, 63);

}

void sol6() {

    int a[100][100] = {};

    int sir[100] = { 7,2,5,3 };

    int n = 4;

    matrice2(a, n, sir);
    afisareMatrice(a, 4, 4);


}

void sol7() {

    int v[100] = { 0,3,8,18,38,78,158,318 };

    int dim = 8;


    bubbleSortDesc(v, dim);

    sirNrDesc2(v, dim, 158);

}

void sol8() {

    int a[100][100] = {};

    int n = 9;

    matrice3(a, n);

    afisareMatrice(a, n, n);


}


void sol9() {

    int a[100][100] = {};

    int n = 9;

    matrice4(a, n);

    afisareMatrice(a, n, n);


}

void sol10() {

    int v[100] = {3,1,5,2,4,5,5,2,5,9,5,7,4,6,8,0,8};

    int dim = 17;


    secventaIncadatra(v, dim);

}

void sol11() {

    int a[100][100] = { {1.5, 0.75, 3, 1.2,},{2.75, 1.25, 2.25, 1.5,},{4.5, 1.15, 3, 4.5},{0.25, 0.85, 1.75, 3}};

    int n = 4;

    int m = 4;

    matrice5(a, n,m);

    afisareMatrice(a, n, n);


}

void sol12() {

    int a[100][100] = {};

    int n = 5;

    matrice7(a, n);

    afisareMatrice(a, n, n);


}


void sol13() {

    int v[100] = {3,2.25,2.5,3,1.75};

    int dim =4;


    maSir(v, dim);

    for (int i = 0; i < dim; i++) {
        cout << v[i] << " ";
    }

}



void sol14() {

    int a[100][100] = { {0,5,2,11},{3,2,10,2},{7,3,1,4},{4,5,0,12},{8,13,7,5} };

    int n = 5;

    int m = 4;

    matrice6(a, n,m);

    afisareMatrice(a, n, m);


}

void sol15() {

    int v[100] = { 1,2,3,4,6,10,2,8,5,7,9,4,6,10,121,20,4,11,10,2,5,2,6,8,10,16};

    int dim = 26;


    secventaPara(v, dim);

}


void sol16() {

    int a[100][100] = {};

    int n = 5;

    matrice8(a, n,n);

    afisareMatrice(a, n, n);


}

void sol17() {

    int v[100] = {5,0,0,9,3,4,0,7,3};

    int dim = 9;

    bubbleSortDesc(v, dim);

    afisareVectorNenule(v, dim);
}



void sol18() {

    int v[100] = { 1,2,3,4,6,10,2,8,5,7,9,4,6,14,121,20,4 };

    int dim = 17;

    secventaPara1(v, dim);

}


void sol19() {

    int a[100][100] = {};

    int n = 5;

    matrice11(a, n);

    afisareMatrice(a, n, n);


}
