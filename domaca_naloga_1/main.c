#include <stdio.h>


float kelvin(float temp) {
    return temp + 273.15;
}

float fahrenheit(float temp){
    return 32.0 + temp*(1.0*9.0/5.0);
}


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

int main()
{
    
    float celzija;
    printf("Vnesi stopinjev stopinjah celzija: ");
    scanf("%f", &celzija);
    printf("Vnesi tip konvevrzije  [k ... pretvorba v kelvin] [f ... pretvorba v fahrenheit]:\n");
    char ch;
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
