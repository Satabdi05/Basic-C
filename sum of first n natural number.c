#include<stdio.h>
#include<conio.h>
 void main()
 {
    int i, n,sum=0;
    printf("Enther the number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        sum = sum+i;
    printf("The sum is : %d", sum);
 }
