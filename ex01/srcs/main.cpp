#include "iter.hpp"

int main()
{
    char* tabC = new char[4];
    tabC[0] = 'a';
    tabC[1] = 'b';
    tabC[2] = 'c';
    tabC[3] = '\0';
    int* tabI = new int[4];
    tabI[0] = 1;
    tabI[1] = 2;
    tabI[2] = 3;
    tabI[3] = 4;
    float* tabF = new float[2];
    tabF[0] = 0.2f;
    tabF[1] = 1.5f;
    double* tabD = new double[4];
    tabD[0] = 3.33;
    tabD[1] = 2.45;
    tabD[2] = 8.75;
    tabD[3] = 0.9876;
    const char *constTab("constant");
    
    ::iter(tabC, 3, print);
    ::iter(tabI, 4, print);
    ::iter(tabF, 2, print);
    ::iter(tabD, 4, print);
    ::iter(constTab, 9, print);

    delete [] tabC;
    delete [] tabI;
    delete [] tabF;
    delete [] tabD;
}
