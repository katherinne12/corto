#include<stdio.h>
#define tamano 100

int main(){
	
	
	int afil, acol, bfil, bcol, i, j, k;
	/*int vector[tamano], cont=0;*/
  printf("Numero de filas de la matriz  A:");
  scanf("%d", &afil);
  printf("Numero de columnas de la matriz  A:");
  scanf("%d", &acol);
  printf("Numero de filas de la matriz B:");
  scanf("%d", &bfil);
  printf("Numero de columnas de la matriz  B:");
  scanf("%d", &bcol);
  printf("\n\n");
  printf("\n\n");
  if(acol!=bfil){
             printf("numero de filas de A  son diferentes con las columnas de B\n");
           return 0;
            }
             
  int A[afil][acol], B[bfil][bcol], C[afil][bcol];
  for(i=0;i<afil;i++){
      for(j=0;j<acol;j++){
          printf("Escribe el valor de la matriz A (%d, %d):",i+1, j+1);
          scanf("%d", &A[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<bfil;i++){
      for(j=0;j<bcol;j++){
          printf("Escribe el valor de la matriz B (%d, %d):", i+1, j+1);
          scanf("%d", &B[i][j]);
      }
  }
 
  for(i=0;i<afil;i++){
      for(j=0;j<bcol;j++){
          C[i][j]=0;
          for(k=0;k<acol;k++){
              C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
          }
      }
  }
 
/*esta es la  matriz a*/
  printf("\n\n\t\t\t Matriz A");
  printf("\n");
  for(i=0;i<afil;i++){
      printf("\n\t\t");
      for(j=0;j<acol;j++){
          printf("  %6d  ", A[i][j]);
      }
  }
  /*esta es la matriz b */
  printf("\n\n\t\t\t Matriz B");
  printf("\n");
  for(i=0;i<bfil;i++){
      printf("\n\t\t");
      for(j=0;j<bcol;j++){
          printf("  %6d  ", B[i][j]);
      }
  }
 /*imprime matriz resultante C*/
  printf("\n\n\t\t\t Matriz C");
  printf("\n");
  for(i=0;i<afil;i++){
      printf("\n\t\t");
      for(j=0;j<bcol;j++){
          printf("  %6d  ", C[i][j]);
      }
  }
  printf("\n");
	
	
	
	
	}
		
	
