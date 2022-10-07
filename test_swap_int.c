#include <stdio.h>
int swap_int(int *a, int *b);
int main (void)
{
    int tata ;
    int toto ;
    tata = 4;
    toto = 9651265;
    swap_int(&tata, &toto);
    if (tata == 9651265 && toto == 4) {
        puts("vous avez réussi");
    } else {
        puts("vous avez raté");
    }
    return (0);
}
