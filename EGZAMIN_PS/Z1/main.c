#include <stdio.h>
#include <stdlib.h>

struct Student{
    char* imie;
    int indeks;
};

int foo(struct Student tab[],int n)
{
    int temp=tab[0].indeks;
    for(int i=0;i<n;i++)
    {
        if (temp> tab[i].indeks)
        {
            temp=tab[i].indeks;
        }
    }
    return temp;
}

int main()
{
    //tu umiesc przypadek testowy
    struct Student st1 = {"Agata", 485};
    struct Student st2 = {"Renata", 199};
    struct Student tab[2];
    tab[0] = st1;
    tab[1] = st2;
    printf("Wynik: %d", foo(tab, 2));
    return 0;
}
