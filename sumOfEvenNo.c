#include <stdio.h>
int main()
{

    printf("Kaushik Ranjan Rajkumar\n");

    int n, sum = 0;
    printf("Enter the last term: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of all even numbers between 1 to %d is: %d\n", n, sum);
    return 0;
}