#include <stdio.h>
int main() {
int m, n;
scanf("%d %d", &m, &n);
int A[m][n], B[m][n];
for(int i=0;i<m;i++)for(int j=0;j<n;j++)
scanf("%d",&A[i][j]);
for(int i=0;i<m;i++)
for(int j=0;j<n;j++) {
scanf("%d",&B[i][j]);
printf("%d ", A[i][j] + B[i][j]);
if(j==n-1) printf("\n");
        }
return 0;
}
