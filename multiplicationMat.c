#include<stdio.h>
# define row 2  
# define col 2
int matmul(int mat1[row][col], int mat[row][col]);
int  main() {
  int a[2][2], b[2][2], i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", & a[i][j]);

    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", & b[i][j]);

    }
  }
  matmul(a, b);
  return 0;
}
int matmul(int mat1[row][col], int mat2[row][col]) {
  int i, j, k, mat[2][2];
  for (i = 0; i < 2; i++) {

    for (j = 0; j < 2; j++) {
      mat[i][j] = 0;
      for (k = 0; k < 2; k++) {

        mat[i][j]=mat[i][j]+( mat1[i][k] * mat2[k][j]);
      }

    }

  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
}
