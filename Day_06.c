#include <stdio.h>
int main() {
int n, i, j = 1;
int a[100];
scanf("%d", &n);
for(i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
    for(i = 1; i < n; i++) {
        if(a[i] != a[i - 1]) {
            a[j] = a[i];
            j++;
        }
    }
    for(i = 0; i < j; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
