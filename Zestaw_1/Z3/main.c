#include <stdio.h>

int howManyEven(int n, int m, int tab1[n][m], int tab2[n][m]);

int main() {
    int tablica1[][3] = {{1,2,3}, {2,3,4}, {4,5,6}};
    int tablica2[][3] = {{0,2,3}, {0,3,4}, {0,4,5}};
    printf("Wynik: %d\n", howManyEven(3, 3, tablica1, tablica2));
    return 0;
}

int howManyEven(int n, int m, int tab1[n][m], int tab2[n][m])
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (tab1[i][j] % 2 == 0)
                result++;
            if (tab2[i][j] % 2 == 0)
                result++;
        }
    }
    return result;
}