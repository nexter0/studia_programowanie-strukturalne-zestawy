#include <stdio.h>
#include <stdlib.h>

int** arrtdCreate(int n, int m)
{
    int** tab = (int**)malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++)
        *(tab + i) = (int*)malloc(sizeof(int) * m);
    return tab;
}

int fun(int** tab, int n)
{
    int result = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int temp = tab[i][j];
            if(temp < 0)
                temp *= -1;
            if((temp % 2) == 1)
                result *= tab[i][j];
        }
    }
    return result;
}

int main() {
    int** tab = arrtdCreate(2,2);
    *(*(tab+0)+0) = -3;
    *(*(tab+0)+1) = -6;
    *(*(tab+1)+0) = 5;
    *(*(tab+1)+1) = 3;
    printf("Wynik: %d", fun(tab, 2));
    return 0;
}
