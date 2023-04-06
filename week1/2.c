#include<stdio.h>

int main() {

    int i, j, r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter the Array elements\n");
    for (i = 0; i < r; i ++) {
        for (j = 0;j  < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The array elements are: \n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");

    }

}