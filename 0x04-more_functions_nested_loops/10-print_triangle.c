
#include <stdio.h>
/* 
Write a function that prints a triangle, followed by a new line.
*/
int main()
{
    int i, j, n;

    /* Input number of rows from user */
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
      /* Move to next line */
        printf("\n");
        /* Print i number of stars */
        for(j=1; j<=i; j++)
        {
            printf("#");
        }

        
    }

    return 0;
}
