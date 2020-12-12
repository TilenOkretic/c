
/*GitHub repo: https://github.com/TilenOkretic/c */

#include <stdio.h>

float kelvin(float temp);
float fahrenheit(float temp);
float konverzija(float temp, char izbor);

int main()
{
    
    float celzija;
    char ch;

    printf("Vnesi stopinje v stopinjah celzija: ");
    scanf("%f", &celzija);
    
    printf("Vnesi tip konvevrzije  [k ... pretvorba v kelvin] [f ... pretvorba v fahrenheit]:\n");
    scanf(" %c", &ch);
    
    float out = konverzija(celzija, ch);
    
    switch(ch){
        case 'k':
            printf("\nRezultat pretvorbe %f stopinj celzija v kelvine je %f kelvin\n", celzija, out);
            break;
        case 'f':
            printf("\nRezultat pretvorbe %f stopinj celzija v fahrenheit je %f stopinj fahrenheit\n", celzija, out);
            break;
    }
    
    return 0;
}

float kelvin(float temp) {
    return temp + 273.15;
}


float fahrenheit(float temp){
    return 32.0 + temp*(1.0*9.0/5.0);
}

/* 
  * Funkcija, ki sprejme tempreaturo kot prvi argument, in nacin pretvorbe kot drugi argument
  * in na podlagi vnesenega vrne vrednost (tipa float) koverzije
  
  --> temp  :float: # vnesena tempreatura
  --> izbor :char:  # tip konverzije 
  
  <-- :float:       # vrednost, ki je konverterana v izbrani 'izbor'
*/

float konverzija(float temp, char izbor) {
    switch(izbor){
        case 'k':
            return kelvin(temp);
        case 'f':
            return fahrenheit(temp);
        default:
            printf("Nevelajven izbor\n[k ... pretvorba v kelvin]\n[f ... pretvorba v fahrenheit]\n");
            break;
    }
}