#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void output_matric(char** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
}
char** input_matric(char** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%s", &a[i][j]);
        }
    }
    return a;
}
char** swap(char** a, int m,int z) {
    for (int i = 0; i < m; i++) {
        a[z][i] ^= a[z+1][i];
        a[z+1][i] ^= a[z][i];
        a[z][i] ^= a[z+1][i];
    }

    return a;
}
int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    char** a = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++){
        a[i] = (char*)malloc(m + 1 * sizeof(char));
}
    input_matric(a, n, m);
    printf("\n");
    output_matric(a, n, m);
    for (int i = 0; i < n - 1;) {
        printf("%c = ", a[i][m - 1]);
        printf("%d\n", a[i][m - 1]);
        printf("%c = ", a[i + 1][m - 1]);
        printf("%d\n", a[i + 1][m - 1]);
        printf("i = %d\n", i);
        if (a[i][m - 1] > a[i + 1][m - 1]) {
            printf("!\n");
            swap(a,m,i);
            i = 0;
        }
        else {
            i++;
        }
    }
    printf("Output:\n");
    output_matric(a, n, m);
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);

}