#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float numarCuZecimale = 3.14;
    int parteaIntreaga = numarCuZecimale;

    float parteaFractionara = numarCuZecimale - parteaIntreaga;

    cout << parteaFractionara <<endl;

    return 0;
}
