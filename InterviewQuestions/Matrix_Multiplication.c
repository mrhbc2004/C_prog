#include<stdio.h>
// #include<math.h>
void matrixmult(int a,int b,int c,int d,int A[a][b],int B[c][d],int Y[a][d]){
    if(b!=c){
        printf("Matrix multiplication is not possible");
        return;
    }
    else{
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                Y[i][j]=0;
                for(int k=0;k<b;k++){
                    Y[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
    }
}
int main(){
    int a,b,c,d;
    printf("Matrix A Size:\n");
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&a,&b);
    int A[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter the [%d][%d] element:",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Matrix B Size:\n");
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&c,&d);
    int B[c][d];
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            printf("Enter the [%d][%d] element:",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    int e,f;
    printf("Matrix C Size:\n");
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&e,&f);
    int C[e][f];
    for(int i=0;i<e;i++){
        for(int j=0;j<f;j++){
            printf("Enter the [%d][%d] element:",i,j);
            scanf("%d",&C[i][j]);
        }
    }
    
    int X[a][d];
    int Y[a][f];
    matrixmult(a,b,c,d,A,B,X);
    matrixmult(a,d,e,f,X,C,Y);
    printf("After multiplication\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<f;j++){
            printf("%d ",Y[i][j]);
        }
        printf("\n");
    }
    return 0;
}
