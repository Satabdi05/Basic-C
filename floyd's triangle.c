#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, t, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    t=1;
    for(i=0; i<rows; i++)
    {
        for (j=0; j<=i; j++)
        {
        if(t<rows)
            printf(" %d", t);
          else
            printf(" %d", t);
          t++;
        }
        printf("\n");
    }
    getch();
}
