#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char** argv) {
    int VettoreAnni[N], i;
    int max, min,PdR=0;
    float media=0;
    
    printf("Inserisci l'eta' di %d persone\n\n", N);
    
    for(i=0;i<N;i++){
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &VettoreAnni[i]);
        media += VettoreAnni[i];
    }
    
    media /= N;
    
    max = VettoreAnni[0];
    min = VettoreAnni[0];
    
    for(i=1;i<N;i++){
        if(VettoreAnni[i] > max)
            max = VettoreAnni[i];
        if(VettoreAnni[i] < min)
            min = VettoreAnni[i];
        if(VettoreAnni[i] > 49)
            PdR++;
    }
    
    printf("\nEta' media: %f", media);
    printf("\nEta' massima: %d", max);
    printf("\nEta' minima: %d", min);
    printf("\nNumero di potenziali Presidenti della Repubblica: %d", PdR);

    return (EXIT_SUCCESS);
}