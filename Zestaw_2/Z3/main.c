#include <stdio.h>

float mean(int n, int m, float tab[n][m]);

int main() {
    float tab[3][5] = {{1.41, 5.01, 0.04, 6.47, 7.56},
                       {4.54, 5.15, 7.24, 3.58, 6.11},
                       {0.05, 0.87, 0.99, 6.12, 7.94}};
    printf("Srednia na przekatnej: %lf\n", mean(3,5, tab));
    return 0;
}

float mean(int n, int m, float tab[n][m])
{
    float sum = 0;
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum+=tab[i][j];
                counter++;
            }

        }
    }
    return (sum/counter);
}