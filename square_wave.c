#include <stdio.h>
#include <math.h>

//time series range (0s to 1ms, 1 cycle of 1kHz wave)
#define Tmin 0.0
#define Tmax 1e-3
#define Npts 100

//frequency components of square wave
#define f1 1000.0
#define f3 3000.0
#define f5 5000.0
#define f7 7000.0
#define f9 9000.0

//magnitude components of square wave
#define v1 0.637
#define v3 0.212
#define v5 0.127
#define v7 0.091
#define v9 0.071

#define PI 3.141

int main(void){

    double Vs1[Npts];
    double Vs3[Npts];
    double Vs5[Npts];
    double Vs7[Npts];
    double Vs9[Npts];
    double Vs1n3[Npts];
    double Vs1n3n5[Npts];
    double Vs1n3n5n7[Npts];
    double Vs1n3n5n7n9[Npts];
    double T[Npts];
    double Tstep = (Tmax - Tmin) / (Npts - 1);
    int i;

    //fill in time step array
    T[0] = Tmin;
    for(i=1; i<Npts; i++){
        T[i] = T[i-1] + Tstep;
    }  

    

    return 0;
}