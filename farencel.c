#include <stdio.h>
void main(){
    int faren;
    float celc;
    faren = 32;
    celc = 0.000000;
    printf ("Please enter the temperature in Farenheit: ");
    scanf("%d", &faren); // accept the farenheit value from user
    celc=(float)(((faren-32)*5)/9); // convert the farenheit value to celcius. store via casting
    printf ("The value is %f", celc); //print the celcius value
    
}