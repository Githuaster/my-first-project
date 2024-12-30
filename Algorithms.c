#include <stdio.h>

void draw (int n);
int main(void)
{
    int height;
    printf("Height: ");
    scanf("%i", &height);
    draw(height);
}

void draw (int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
    printf("\n");
    }
}

// Linear Search: go through each number from the first and check (1 < N)
// Binary Search: If the list is sorted, go to the middle and go on (1 < N)
// Bubble sort: Swap if current number is bigger than the number next and add one to swap counter (N^2 < N^2)
// Selection Sort: find the smallest element and sawp with the first number (N < N^2)
// Merge Sort: sort the left and right array and merge (Nlog(N) < Nlog(N))