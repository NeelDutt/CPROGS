#include <stdio.h>
void main(){
    int faren;
    float celc;
    faren = 32;
    celc = 0.000000;
    while (faren <= 50){
        celc = (float)((faren-32)*5)/9;
        printf ("%f\n", celc);
        faren = faren + 1;
    }
}