/*
** EPITECH PROJECT, 2018
** ptr
** File description:
** fct
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct sauce
{
    char *cmp;
    void (*ptdrtki)(int);
}sauce;

void kiptdr(int f)
{
    f = 32;
    printf("%d\n",f);
}

void uio(int re)
{
    int a = 3;
    int b = 4;

    re = a + b;
    printf("%d\n",re);
}

void potter(int harry)
{
    int voldemort = 9;
    int baguette = 3;

    harry = voldemort * baguette;
    printf("%d\n", harry);
}

void pokemon(int pikachu)
{
    int pokeball = 1;

    pikachu = pokeball - pikachu;
    printf("%d\n", pikachu);
}


int main(int ac, char **av)
{
    int n = 0;
    sauce *fireclem = NULL;
    char *azerty[4] = {"chalut","les","chouchous","bye"};
    fireclem = malloc(sizeof(sauce) * 4);
    fireclem[0].cmp = "chalut";
    fireclem[1].cmp = "les";
    fireclem[2].cmp = "chouchous";
    fireclem[3].cmp = "bye";
    fireclem[0].ptdrtki = &pokemon;
    fireclem[1].ptdrtki = &potter;
    fireclem[2].ptdrtki = &uio;
    fireclem[3].ptdrtki = &kiptdr;
    while (n != 4) {
        printf("%s\n", azerty[n]);
        if (strcmp(av[1], azerty[n]) == 0)
            fireclem[n].ptdrtki(atoi(av[2]));
        n++;
    }
    
    printf("Coucou les potes\n");
}
