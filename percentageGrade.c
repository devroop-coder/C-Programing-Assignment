#include<stdio.h>

int main() {
    
    printf("Kaushik Ranjan Rajkumar\n");

    int pM,cM,bM,mM,csM,total;
    
    printf("Enter marks in Physics: \n");
    scanf("%d", &pM);
    
    printf("Enter marks in Chemistry: \n");
    scanf("%d", &cM);
    
    printf("Enter marks in Biology: \n");
    scanf("%d", &bM);
    
    printf("Enter marks in Mathematics: \n");
    scanf("%d", &mM);
    
    printf("Enter marks in Computer Science: \n");
    scanf("%d", &csM);
    
    total = pM + cM + bM + mM + csM;
    
    float percentage = (float)total / 500 * 100;

    printf("Percentage is %.2f\n", percentage);

    if (percentage>=90)
    {
        printf("Grade A\n");
    }else if (percentage >= 80)
    {
        printf("Grade B\n");
    } else if (percentage >= 70)
    {
        printf("Grade C\n");
    } else if (percentage >= 60)
    {
        printf("Grade D\n");
    } else if (percentage >=40)
    {
        printf("Grade E\n");
    } else
    {
        printf("Grade F\n");
    }

    return 0;
}