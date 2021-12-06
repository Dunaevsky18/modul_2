#include <stdio.h>
#include <cs50.h>


int main (void)
{
    int N, K;

    N = get_int ("Поверхів: ");
    K = get_int ("Мешканці 1-го поверха: ");


    int people[N];
    int suma = 0;

    int i = 0;
    while (i < N) 
    {
        people[i] = (i * 4) + K;
        suma += people[i];
        i++;
    }
    printf("\n");
    printf("Жителі, що натискають кнопку ліфта на 1-му поверсі: %d\n", suma - K);

}