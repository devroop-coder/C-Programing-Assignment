#include <stdio.h>
int main()
{

    printf("Kaushik Ranjan Rajkumar\n");

    int cp, sp, res;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if (cp > sp)
    {
        res = cp - sp;
        printf("Loss = %d\n", res);
    }
    else if (cp < sp)
    {
        res = sp - cp;
        printf("Profit = %d\n", res);
    }
    else
    {
        printf("No profit or loss\n");
    }

    return 0;
}