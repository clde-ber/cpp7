#include "iter.hpp"

int main()
{
    char* tabC = new char[4];
    tabC[0] = 'a';
    tabC[1] = 'b';
    tabC[2] = 'c';
    tabC[3] = '\0';
    char **tabCAddress = &tabC;
    int* tabI = new int[4];
    tabI[0] = 1;
    tabI[1] = 2;
    tabI[2] = 3;
    tabI[3] = 4;
    int **tabIAddress = &tabI;
    float* tabF = new float[2];
    tabF[0] = 0.2f;
    tabF[1] = 1.5f;
    float **tabFAddress = &tabF;
    double* tabD = new double[4];
    tabD[0] = 3.33;
    tabD[1] = 2.45;
    tabD[2] = 8.75;
    tabD[3] = 0.9876;
    double **tabDAddress = &tabD;
    
    ::iter(tabCAddress, 3, print);
    ::iter(tabIAddress, 4, print);
    ::iter(tabFAddress, 2, print);
    ::iter(tabDAddress, 4, print);

    delete [] tabC;
    delete [] tabI;
    delete [] tabF;
    delete [] tabD;
}