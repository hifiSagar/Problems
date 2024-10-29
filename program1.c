#include <stdio.h>
void main() {

    int rows=5, i, j;
        // printf("Enter No Of Rows:");
        // scanf("%d", &rows);

            for(i= rows; i >= 1; i--) 
               {
                for(j = 1; j <= i; j++) 
            {
                printf("%d", j);
            }
    printf("\n");
                }
}