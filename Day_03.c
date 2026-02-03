#include <stdio.h>
int main() {
int n, k, i, count = 0, found = 0;
int a[100];
    scanf("%d", &n);
for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    scanf("%d", &k);
for (i = 0; i < n; i++) {
        count++;
    if (a[i] == k) {
    printf("Found at index %d\n", i);
        found = 1;
        break;
        }
    }
    if (!found)
    printf("Not Found\n");
    printf("Comparisons = %d\n", count);
    return 0;
}
